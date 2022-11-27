#include <stdio.h>

int main() {

    int n, numero = 0; 
    printf("Dime cuanto vale n: ");
    scanf("%d", &n); 

    for(int  i = 0; i < n; i++) {
        numero++;
    }

    printf("j vale %d con el ciclo for\n", numero);

    return 0;
}