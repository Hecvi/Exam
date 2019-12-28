/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 13:35:16 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 17:15:29 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    print_word(char *s, int i)
{
    int count;

    count = 0;
    while (s[i] != ' ' && s[i] != '\t' && s[i])
        count += write (1, &s[i++], 1);
    return (count);
}

int     main(int ac, char **av)
{
    int i;
    int count;

    i = 0;
    if (ac > 1)
    {
        while (av[1][i] && (' ' == av[1][i] || '\t' == av[1][i]))
            i++;
        while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            i++;
        while (av[1][i])
        {
            count = 0;
            if (av[1][i] != ' ' && av[1][i] != '\t')
            {
                count += print_word(av[1], i);
                write(1, " ", 1);
            }
            i = i + count;
            if (!av[1][i])
                break ;
            i++;
        }
        i = 0;
        while (' ' == av[1][i] || '\t' == av[1][i])
            i++;
        print_word(av[1], i);
    }
    write(1, "\n", 1);
    return (0);
}
