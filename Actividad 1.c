#include <stdio.h>

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

void menuOpciones()
{
    while (1)
    {
        printf("Menu de opciones \n");
        printf("1.- Modo Recursivo\n");
        printf("2.- Modo Iterativo\n");
        printf("3.- Salir\n");
        printf("Seleccione un modo: ");
        int opcion;
        scanf("%i", &opcion);

        if (opcion == 1)
        {
            int numRecursivo;
            printf("\n\nModo Recursivo\n");
            printf("Defina el factorial a calcular: ");
            scanf("%i", &numRecursivo);
            int resRecursivo = factorialRecursivo(numRecursivo);
            printf("El resultado es: %i", resRecursivo);
        }
        else if (opcion == 2)
        {
            int numIterativo;
            printf("\n\nModo Iterativo\n");
            printf("Defina el factorial a calcular: ");
            scanf("%i", &numIterativo);
            int resIterativo = factorialIterativo(numIterativo);
            printf("El resultado es: %i", resIterativo);
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
