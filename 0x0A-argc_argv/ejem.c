#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int coins[5] = {1,2,5,10,25}; 
    int coinList[20] = { 0 };
    int i, k = 0;
	int change = 0;

    for (i = 5 - 1; i >= 0; i--)
	{
        if (argc == 2)
        {
            while (*argv[1] >= coins[i])
		    {
			    change = change + atoi(argv[1]);
			    change -= coins[i];
			    coinList[k++] = coins[i];
            }
            printf("%d ", k);
        }
        else
            {
                printf("Error\n ");
                return (1);
            }
    }  
    return (0);
}
