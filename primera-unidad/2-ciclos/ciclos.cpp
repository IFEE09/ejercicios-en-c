#include <stdio.h>

int main() {

    int n, numero = 0; 
    printf("Dime cuanto vale n: ");
    scanf("%d", &n); 

    for(int  i = 0; i < n; i++) {
        numero++;
    }

    printf("j vale %d con el ciclo for\n", numero);

    numero = 0; //aquí reinicia el número de nuevo para que entre al siguiente ciclo

    while(numero < n) {
        numero++;
    }

    printf("j vale %d con el ciclo while\n", numero);

    numero = 0; //reiniciando número de nuevo

    do{
        numero++;
    } while(numero < 10); 
    
    printf("j vale %d con el ciclo do-while\n", numero);

    return 0;
}