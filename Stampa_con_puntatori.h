#include <stdio.h>

void stampaArray(int *puntatore_array, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", *(puntatore_array + i));
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int dimensione = sizeof(array) / sizeof(array[0]);

    printf("Elementi dell'array: ");
    printArray(array, dimensione);

    return 0;
}
