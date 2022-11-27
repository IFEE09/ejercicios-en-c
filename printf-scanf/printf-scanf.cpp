#include <stdio.h>

int main() {

    char nombre[30];
    printf("Cual es tu nombre?: ");
    scanf("%s", nombre);
    printf("Hola %s\n", nombre);

    return 0;
}