#include <stdio.h>

int main() {

    char nombre[30];
    printf("Cual es tu nombre?: ");
    scanf("%s", nombre);
    printf("Hola %s\n", nombre);

    //Para leer cadenas con espacios y dos nombres, usar fgets -> https://parzibyte.me/blog/2020/12/30/c-leer-cadena-espacios/

    return 0;
}