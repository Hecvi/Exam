/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:20:17 by exam              #+#    #+#             */
/*   Updated: 2020/01/16 13:20:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     check(char a, char b)
{
    if ((a == '(' && ')' == b) || (a == '[' && ']' == b) || (a == '{' && '}' == b))
        return (1);
    return (0);
}

int     main(int ac, char **av)
{
    int     i;
    int     j;
    int     k;
    int     sign;
    char    mas[1000] = {0};

    if (ac < 2)
        return (write(1, "\n", 1));
    else
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            k = 0;
            sign = 0;
            while (av[i][j])
            {
                if ((')' == av[i][j] || ']' == av[i][j] || '}' == av[i][j]) && '\0' == mas[0])
                {
                    write(1, "Error\n", 6);
                    sign = 1;
                    break ;
                }
                else if ('(' == av[i][j] || '{' == av[i][j] || '[' == av[i][j])
                {
                    mas[k] = av[i][j];
                    k++;
                }
                else if (')' == av[i][j] || ']' == av[i][j] || '}' == av[i][j])
                {
                    if (check(mas[--k], av[i][j]))
                        mas[k] = '\0';
                    else
                    {
                        write(1, "Error\n", 6);
                        sign = 1;
                        break ;
                    }
                }
                j++;
            }
            if ('\0' == mas[0] && 0 == sign)
                write(1, "OK\n", 3);
            else if (0 == sign)
                write(1, "Error\n", 6);
            i++;
        }
    }
    return (0);
}

