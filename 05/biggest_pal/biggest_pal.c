/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:30:10 by klaurine          #+#    #+#             */
/*   Updated: 2020/01/14 13:30:12 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     check_pal(char *s, int i, int nechet, int counter)
{
    int j;

    j = 1;
    if (1 == nechet)
        while (s[i + j] == s[i - j] && (i - j) >= 0 && (i + j))
        {
            counter++;
            j++;
        }
    else if (0 == nechet)
        while (s[i + j + 1] == s[i - j] && (i - j) >= 0 && (i + j + 1))
        {
            counter++;
            j++;
        }
    return (counter);
}

void    write_pal(char *s, int max, int i, int nechet)
{
    int tmp;

    tmp = max;
    if (1 == nechet)
    {
        while (max > 0)
        {
            write(1, &s[i - max], 1);
            max--;
        }
        while (max <= tmp)
        {
            write(1, &s[i + max], 1);
            max++;
        }
    }
    else
    {
        max--;
        while (max >= 0)
        {
            write(1, &s[i - max], 1);
            max--;
        }
        while (++max < tmp)
            write(1, &s[i + max + 1], 1);
    }
}

int     main(int ac, char **av)
{
    int i;
    int max;
    int start;
    int number_chet;
    int number_nechet;

    if (2 == ac && av[1][0])
    {
        i = 1;
        max = 0;
        number_chet = 0;
        number_nechet = 0;
        if (av[1][0] && '\0' == av[1][1])
            write(1, av[1], 1);
        else if (av[1][0] && av[1][1] && '\0' == av[1][2] && av[1][0] == av[1][1])
            write(1, av[1], 2);
        else
            while (av[1][i])
            {
                if (av[1][i - 1] == av[1][i + 1] && (i - 1) >= 0 && (i + 1))
                    number_nechet = check_pal(av[1], i, 1, 0);
                if (av[1][i] == av[1][i + 1] && av[1][i - 1] == av[1][i + 2] && (i - 1) >= 0 && (i + 2))
                    number_chet = check_pal(av[1], i, 0, 1);
                if (number_chet > max || number_nechet > max)
                {
                    max = (number_chet > number_nechet) ? number_chet : number_nechet;
                    start = i;
                }
                i++;
            }
        if (max == number_chet && number_chet)
            write_pal(av[1], max, start, 0);
        else if (max == number_nechet && number_nechet)
            write_pal(av[1], max, start, 1);
    }
    write(1, "\n", 1);
    return (0);
}