/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 17:31:04 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/27 17:31:07 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    print_word(char *s, int i)
{
    int count;

    count = 0;
    while (s[i] && s[i] != ' ' && s[i] != '\t')
        count += write(1, &s[i++], 1);
    return (count);
}

int     main(int ac, char **av)
{
    int i;
    int count;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        while (i >= 0)
        {
            count = 0;
            while (' ' == av[1][i])
            {
                count += print_word(av[1], i);
                if (count)
                    write(1, " ", 1);
            }
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
