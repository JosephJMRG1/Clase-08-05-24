#include <stdio.h>

/* ---------------------------------------- ACTIVIDAD 1 ---------------------------------------- */

int factorialRecursivo(int n)
{
    int factorial;
    if (n == 0 || n == 1)
    {
        factorial = n;
        printf("\nEl factorial de %i es: %i\n", n, factorial);
    }
    else if (n < 0)
    {
        printf("No se aceptan numeros negativos, \nsolo numeros naturales\n");
        return -1;
    }
    else
    {
        factorial = n * factorialRecursivo(n - 1);
        printf("El factorial de %i es: %i\n", n, factorial);
    }
    return factorial;
}

int factorialIterativo(int n)
{
    int factorial = 1;
    if (n == 0 || n == 1)
    {
        printf("\nEl factorial de %i es: %i\n", n, factorial);
    }
    else if (n < 0)
    {
        printf("No se aceptan numeros negativos, \nsolo numeros naturales\n");
        return -1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
            printf("El factorial de %i es: %i\n", n, factorial);
        }
    }
    return factorial;
}

void menuOpciones()
{
    while (1)
    {
        printf("\nMenu de opciones\n\n");
        printf("1.- Modo Recursivo\n");
        printf("2.- Modo Iterativo\n");
        printf("3.- Salir\n");
        printf("Seleccione un modo: ");
        int opcion;
        scanf("%i", &opcion);

        if (opcion == 1)
        {
            int numRecursivo;
            printf("\nModo Recursivo\n");
            printf("Defina el factorial a calcular: ");
            scanf("%i", &numRecursivo);
            factorialRecursivo(numRecursivo);
        }
        else if (opcion == 2)
        {
            int numIterativo;
            printf("\nModo Iterativo\n");
            printf("Defina el factorial a calcular: ");
            scanf("%i", &numIterativo);
            factorialIterativo(numIterativo);
        }
        else if (opcion == 3)
        {
            break;
        }
        else
        {
            printf("Opcion no valida.\n\n");
        }
    }
    return;
}

int main()
{
    menuOpciones();
    return 0;
}
