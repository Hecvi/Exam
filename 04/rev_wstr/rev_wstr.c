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

int    words_counter(char *s)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t' && (' ' == s[i + 1] ||
        '\t' == s[i + 1] || '\0' == s[i + 1]))
            count++;
        i++;
    }
    return (count);
}

int    print_word(char *s, int i)
{
    int count;

    if (i != 0)
        i++;
    count = 0;
    while (s[i] && s[i] != ' ' && s[i] != '\t')
        count += write(1, &s[i++], 1);
    return (count);
}

int     main(int ac, char **av)
{
    int i;
    int count;
    int words;

    i = 0;
    if (ac == 2)
    {
        words = words_counter(av[1]);
        while (av[1][i])
            i++;
        while (i >= 0)
        {
            count = 0;
            if (' ' == av[1][i] || '\t' == av[1][i] || i == 0)
            {
                count += print_word(av[1], i);
                if (count && words > 1)
                    write(1, " ", 1);
                words--;
            }
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
