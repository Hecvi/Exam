/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 13:35:16 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/26 13:35:19 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int     words_counter(char *s)
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
*/

void    print_word(char *s, int i)
{
    while (s[i] != ' ' || s[i] != '\t' || s[i] != '\0')
        write (1, &s[i++], 1);
}

int     main(int ac, char **av)
{
    int i;
//    int count;


    i = 0;
//    count = 0;
    if (ac > 1)
    {
//        count = words_counter(av[1]);
        while (av[1][i])
        {
            if (av[1][i] != ' ' && av[1][i] != '\t' && (' ' == av[1][i + 1] ||
            '\t' == av[1][i + 1] || '\0' == av[1][i + 1]))
                break ;
            i++;
        }
        if (av[1][i])
            while (av[1][i])
            {
                if (av[1][i] != ' ' && av[1][i] != '\t')
                print_word(av[1], i);
                write(1, " ", 1);
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
