/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 12:02:26 by exam              #+#    #+#             */
/*   Updated: 2020/01/18 12:02:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     check_nechet(char *s, int i)
{
    int j;
    int counter;

    j = 1;
    counter = 0;
    while (s[i + j] == s[i - j] && (i - j) >= 0 && s[i + j])
    {
        counter++;
        j++;
    }
    return (counter);
}

int     check_chet(char *s, int i)
{
    int j;
    int counter;

    j = 1;
    counter = 1;
    while (s[i - j] == s[i + j + 1] && (i - j) >= 0 && s[i + j] && s[i + j + 1])
    {
        counter++;
        j++;
    }
    return (counter);
}

void    print_nechet(char *s, int j, int i)
{
    int max;

    max = j;
    while (j)
    {
        write(1, &s[i - j], 1);
        j--;
    }
    while (j <= max)
    {
        write(1, &s[i - j], 1);
        j++;
    }
}

void    print_chet(char *s, int j, int i)
{
    int max;

    j--;
    max = j;
    while (j >= 0)
    {
        write(1, &s[i - j], 1);
        j--;
    }
    j++;
    while (j <= max)
    {
        write(1, &s[i - j], 1);
        j++;
    }
}

int     main(int ac, char **av)
{
    int i;
    int max_n;
    int max_c;
    int start_n;
    int start_c;
    int counter_n;
    int counter_c;


    if (2 == ac)
    {
        if (av[1][0] && !av[1][1])
            write(1, av[1], 1);
        else if (av[1][0] && av[1][1] && !av[1][2] && av[1][0] == av[1][1])
            write(1, av[1], 2);
        else
        {
            i = 0;
            max_n = 0;
            max_c = 0;
            start_n = 0;
            start_c = 0;
            counter_n = 0;
            counter_c = 0;
            while (av[1][i])
            {
                if (av[1][i + 1] == av[1][i - 1] && (i - 1) >= 0 && av[1][i + 1])
                {
                    counter_n = check_nechet(av[1], i);
                    if (counter_n >= max_n)
                    {
                        max_n = counter_n;
                        start_n = i;
                    }
                }
                else if (av[1][i] == av[1][i + 1] && av[1][i - 1] == av[1][i + 2] && (i - 1) >= 0 && av[1][i + 1] && av[1][i + 2])
                {
                    counter_c = check_chet(av[1], i);
                    if (counter_c >= max_c)
                    {
                        max_c = counter_c;
                        start_c = i;
                    }
                }
                i++;
            }
            if (max_n >= max_c && max_n)
                print_nechet(av[1], max_n, start_n);
            else if (max_c > max_n && max_c)
                print_chet(av[1], max_c, start_c);
        }
    }
    write(1, "\n", 1);
    return (0);
}