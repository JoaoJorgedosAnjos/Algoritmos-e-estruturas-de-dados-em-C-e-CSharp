#include <stdio.h> // Diretiva de pré-processamento

#define PI 3.14 // Definição de uma constante
int add(int a, int b); // Protótipo de função

int main(void)
{
    int result = add(5, 3); // Chamada da função add
    printf("Resultado: %d\n", result);
    return 0;
}
int add(int a, int b)
{
    return a + b; // Definição da função add
}