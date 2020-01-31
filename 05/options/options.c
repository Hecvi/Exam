/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:03:38 by exam              #+#    #+#             */
/*   Updated: 2020/01/16 12:03:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int ac, char **av)
{
    int i;
    int j;
    char c;
    int bytes[32] = {0};

    if (ac < 2)
        return (write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36));
    else
    {
        i = 1;
        while (av[i])
        {
            j = 1;
            if ('-' == av[i][0])
            {
                while (av[i][j])
                {
                    if ('h' == av[i][j])
                        return (write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36));
                    if (av[i][j] >= 'a' && av[i][j] <= 'z')
                        bytes['z' - av[i][j] + 6] = 1;
                    else
                        return (write(1, "Invalid Option\n", 15));
                    j++;
                }
            }
            else
                return (write(1, "Invalid Option\n", 15));
            i++;
        }
        i = 0;
        while (i < 32)
        {
            c = bytes[i] + '0';
            write(1, &c, 1);
            if (7 == i || 15 == i || 23 == i)
                write(1, " ", 1);
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}
