#include <stdio.h>

// #define MAX_DIGITOS 100

/* ---------------------------------------- ACTIVIDAD 1 ---------------------------------------- */

int factorialRecursivo(int n)
{
    int factorial;
    if (n == 0 || n == 1)
    {
        factorial = n;
    }
    else if (n < 0)
    {
        printf("No se aceptan numeros negativos, \nsolo numeros naturales\n");
        return -1;
    }
    else
    {
        factorial = n * factorialRecursivo(n - 1);
    }
    return factorial;
}

int factorialIterativo(int n)
{
    int factorial;
    if (n == 0 || n == 1)
    {
        factorial = n;
    }
    else if (n < 0)
    {
        printf("No se aceptan numeros negativos, \nsolo numeros naturales\n");
        return -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            factorial = n * (n - 1);
        }
    }
    return factorial;

    return 0;
}

int main()
{

    printf("Menu de opciones: \n");
    printf("1.- Modo Recursivo\n");
    printf("2.- Modo Iterativo\n");
    int opcion = scanf("%i", &opcion);
    if (opcion == 1)
    {
        int numRecursivo;
        printf("Modo Recursivo\n");
        printf("Defina el factorial a calcular: \n");
        scanf("%i", &numRecursivo);
        int resRecursivo = factorialRecursivo(numRecursivo);
        printf("%i\n\n", resRecursivo);
    }
    else if (opcion == 2)
    {
        int numIterativo;
        printf("Modo Iterativo\n");
        printf("Defina el factorial a calcular: \n");
        scanf("%i", &numIterativo);
        int resIterativo = factorialIterativo(numIterativo);
        printf("%i\n\n", resIterativo);
    }

    return 0;
}
