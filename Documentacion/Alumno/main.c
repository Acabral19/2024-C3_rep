#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    float promedio;
    char carrera[50];
} Alumno;

void nuevoArchivo(const char *filename);
void guardarArchivo(const char *filename, Alumno *alumnos, int count);
int abrirArchivo(const char *filename, Alumno *alumnos, int maxRecords);
void buscarAlumno(const char *filename, const char *nombreBuscado);
void agregarAlumno(const char *filename);

int main() {
    char filename[50] = "datos.bin";
    Alumno alumnos[100];
    int count = 0;
    int opcion;

    do {
        printf("\n--- Sistema de Gestión de Alumnos ---\n");
        printf("1. Crear un nuevo archivo\n");
        printf("2. Abrir un archivo existente\n");
        printf("3. Guardar archivo\n");
        printf("4. Buscar un alumno por nombre\n");
        printf("5. Agregar un nuevo alumno\n");
        printf("6. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar();

        switch (opcion) {
        case 1:
            printf("Ingrese el nombre del archivo: ");
            scanf("%s", filename);
            nuevoArchivo(filename);
            break;
        case 2:
            printf("Ingrese el nombre del archivo: ");
            scanf("%s", filename);
            count = abrirArchivo(filename, alumnos, 100);
            if (count > 0) {
                printf("Se cargaron %d registros.\n", count);
            }
            break;
        case 3:
            guardarArchivo(filename, alumnos, count);
            break;
        case 4:
            {
                char nombreBuscado[50];
                printf("Ingrese el nombre a buscar: ");
                scanf("%s", nombreBuscado);
                buscarAlumno(filename, nombreBuscado);
            }
            break;
        case 5:
            agregarAlumno(filename);
            break;
        case 6:
            printf("Saliendo del programa.\n");
            break;
        default:
            printf("Opción no válida.\n");
        }
    } while (opcion != 6);

    return 0;
}


void nuevoArchivo(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error al crear el archivo");
        return;
    }
    fclose(file);
    printf("Archivo creado exitosamente: %s\n", filename);
}


void guardarArchivo(const char *filename, Alumno *alumnos, int count) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error al guardar el archivo");
        return;
    }
    fwrite(alumnos, sizeof(Alumno), count, file);
    fclose(file);
    printf("Archivo guardado exitosamente.\n");
}

int abrirArchivo(const char *filename, Alumno *alumnos, int maxRecords) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 0;
    }
    int count = fread(alumnos, sizeof(Alumno), maxRecords, file);
    fclose(file);
    return count;
}

void buscarAlumno(const char *filename, const char *nombreBuscado) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return;
    }
    Alumno alumno;
    int encontrado = 0;
    while (fread(&alumno, sizeof(Alumno), 1, file)) {
        if (strcmp(alumno.nombre, nombreBuscado) == 0) {
            printf("Alumno encontrado:\n");
            printf("Nombre: %s\n", alumno.nombre);
            printf("Promedio: %.2f\n", alumno.promedio);
            printf("Carrera: %s\n", alumno.carrera);
            encontrado = 1;
            break;
        }
    }
    fclose(file);
    if (!encontrado) {
        printf("Alumno no encontrado.\n");
    }
}

void agregarAlumno(const char *filename) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return;
    }
    Alumno alumno;
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", alumno.nombre);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &alumno.promedio);
    getchar();
    printf("Ingrese la carrera del alumno: ");
    fgets(alumno.carrera, sizeof(alumno.carrera), stdin);
    alumno.carrera[strcspn(alumno.carrera, "\n")] = '\0';
    fwrite(&alumno, sizeof(Alumno), 1, file);
    fclose(file);
    printf("Alumno agregado exitosamente.\n");
}
