#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[]);

/**
* main - program that prints the minimum number of coins to make
* change_ for an amount of money.
* @argc: contador
* @argv: matriz
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
    int cont, contador_array, cent = 0;
    int change_[5] = {25, 10, 5, 2, 1};
    
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    cont = atoi(argv[1]);

    if (cont < 0)
    {
        printf("0\n");
        return (0);
    }
    else
    {
        for (contador_array = 0; contador_array < 5; contador_array++)
        {
            if (cont >= change_[contador_array])
            {
                cont -= change_[contador_array];
                cent += 1;
                if (cont >= change_[contador_array])
                {
                    contador_array--;
                }
                else if (cont == 0)
                {
                break;
                }
            }
        }
    printf("%d\n", cent);
    return (0);
    }
}
