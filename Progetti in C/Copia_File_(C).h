#include <stdio.h>

int main() {
    FILE *daCopiare, *copia;
    char carattere_di_supporto;

    daCopiare = fopen("file1.txt", "r");
    if (daCopiare == NULL) {
        printf("Impossibile aprire il file.\n");
        return -1;
    }

    destinazione = fopen("file2.txt", "w");
    if (copia == NULL) {
        printf("Failed to open the destination file.\n");
        fclose(daCopiare);
        return -1;
    }

    while ((carattere_di_supporto = fgetc(daCopiare)) != EOF) {
        fputc(carattere_di_supporto, copia);
    }

    printf("File copiato con successo.\n");

    fclose(daCopiare);
    fclose(copia);
    return 0;
}
