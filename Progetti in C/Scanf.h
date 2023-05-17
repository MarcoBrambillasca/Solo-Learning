#include <stdio.h>

int main() {
  int intero;

    printf("Inserisci un intero: ");
    scanf("%d", &intero);

    printf("Hai inserito: %d\n", intero);
  
  
  float float;

    printf("Inserisci un numero con la virgola: ");
    scanf("%f", &float);

    printf("Hai inserito: %.2f\n", float);

  
  char parola[20];

    printf("Inserisci una parola: ");
    scanf("%s", parola);

    printf("Parola inserita: %s!\n", parola);

    return 0;
  
  
}
