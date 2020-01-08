
#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    int i;
    int number;

    if (2 == ac)
    {
        i = 2;
        number = atoi(av[1]);
        if (1 == number)
            return (printf("1\n"));
        while (i <= number)
        {
            while(!(number % i))
            {
                number = number / i;
                printf("%d", i);
                if (number != 1)
                    printf("*");
            }
            i++;
        }
    }
    printf("\n");
    return (0);
}