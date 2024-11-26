#include <stdio.h>      // Biblioteca est�ndar para entrada y salida
#include <stdlib.h>     // Biblioteca est�ndar para utilidades generales

#pragma pack(push, 1)   // Desactiva el padding (relleno) autom�tico para las estructuras
typedef struct {
    unsigned char  bfType[2];  // Tipo de archivo, debe ser "BM" para archivos BMP
    unsigned int   bfSize;     // Tama�o total del archivo en bytes
    unsigned short bfReserved1; // Reservado, debe ser 0
    unsigned short bfReserved2; // Reservado, debe ser 0
    unsigned int   bfOffBits;  // Desplazamiento en bytes desde el inicio del archivo hasta los datos de la imagen
} BITMAPFILEHEADER;

typedef struct {
    unsigned int   biSize;         // Tama�o de este encabezado (en bytes)
    int            biWidth;        // Ancho de la imagen (en p�xeles)
    int            biHeight;       // Alto de la imagen (en p�xeles)
    unsigned short biPlanes;       // N�mero de planos (debe ser 1)
    unsigned short biBitCount;     // Bits por p�xel (24 para este ejemplo, RGB)
    unsigned int   biCompression;  // Tipo de compresi�n (0 = sin compresi�n)
    unsigned int   biSizeImage;    // Tama�o de los datos de la imagen (en bytes)
    int            biXPelsPerMeter; // Resoluci�n horizontal (p�xeles por metro)
    int            biYPelsPerMeter; // Resoluci�n vertical (p�xeles por metro)
    unsigned int   biClrUsed;      // N�mero de colores usados (0 = todos)
    unsigned int   biClrImportant; // N�mero de colores importantes (0 = todos)
} BITMAPINFOHEADER;
#pragma pack(pop)       // Restaura el padding autom�tico

// Funci�n para convertir un p�xel BGR a escala de grises
unsigned char convertirAGris(unsigned char b, unsigned char g, unsigned char r) {
    // F�rmula ponderada para calcular un valor de gris basado en la percepci�n humana
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);
}

// Funci�n para convertir un archivo BMP a blanco y negro
void convertirBMPBlancoNegro(const char *input_filename, const char *output_filename) {
    FILE *input_file = fopen(input_filename, "rb");  // Abrir el archivo de entrada en modo binario
    if (input_file == NULL) {                        // Verificar si el archivo se abri� correctamente
        fprintf(stderr, "No se puede abrir el archivo %s\n", input_filename);
        return;
    }

    BITMAPFILEHEADER fileHeader; // Encabezado del archivo BMP
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, input_file); // Leer el encabezado del archivo

    BITMAPINFOHEADER infoHeader; // Encabezado de informaci�n del BMP
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, input_file); // Leer el encabezado de informaci�n

    // Verificar si el archivo es un BMP de 24 bits
    if (fileHeader.bfType[0] != 'B' || fileHeader.bfType[1] != 'M' || infoHeader.biBitCount != 24) {
        fprintf(stderr, "El archivo no es un BMP de 24 bits\n");
        fclose(input_file);
        return;
    }

    FILE *output_file = fopen(output_filename, "wb"); // Crear el archivo de salida
    if (output_file == NULL) {                        // Verificar si se pudo crear el archivo
        fprintf(stderr, "No se puede crear el archivo %s\n", output_filename);
        fclose(input_file);
        return;
    }

    // Escribir los encabezados en el archivo de salida
    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, output_file);
    fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, output_file);

    // Calcular el padding (relleno) de cada fila
    int padding = (4 - (infoHeader.biWidth * 3) % 4) % 4;

    // Procesar fila por fila
    for (int i = 0; i < infoHeader.biHeight; i++) { // Iterar sobre las filas
        for (int j = 0; j < infoHeader.biWidth; j++) { // Iterar sobre los p�xeles de cada fila
            unsigned char bgr[3];  // Buffer para almacenar un p�xel (B, G, R)
            fread(bgr, 3, 1, input_file); // Leer el p�xel del archivo original

            // Convertir el p�xel a escala de grises
            unsigned char gris = convertirAGris(bgr[0], bgr[1], bgr[2]);

            // Escribir el p�xel convertido (en escala de grises) en el archivo de salida
            unsigned char gris_pixel[3] = {gris, gris, gris};
            fwrite(gris_pixel, 3, 1, output_file);
        }

        // Saltar el padding en el archivo original
        fseek(input_file, padding, SEEK_CUR);

        // A�adir padding al archivo de salida
        unsigned char padding_bytes[3] = {0, 0, 0};
        fwrite(padding_bytes, padding, 1, output_file);
    }

    fclose(input_file);  // Cerrar el archivo original
    fclose(output_file); // Cerrar el archivo de salida

    printf("Imagen convertida a blanco y negro y guardada en %s\n", output_filename);
}

int main(int argc, char *argv[]) {
    const char *archivo_entrada = "avion.bmp";   // Nombre del archivo de entrada
    const char *archivo_salida = "avion_bn.bmp"; // Nombre del archivo de salida

    convertirBMPBlancoNegro(archivo_entrada, archivo_salida); // Llamar a la funci�n de conversi�n

    return 0; // Finalizar el programa correctamente
}
