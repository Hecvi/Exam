/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:56:42 by klaurine          #+#    #+#             */
/*   Updated: 2020/01/16 19:56:43 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_itoa_base(int value, int base)
{
    int i;
    char *s;
    int sign;
    long number;

    sign = (10 == base && value < 0) ? 1 : 0;
    number = (value < 0) ? -(long)value : value;
    i = (1 == sign) ? 2 : 1;
    while (number > 9)
    {
        i++;
        number /= 10;
    }
    if (!(s = (char *) malloc(sizeof(char) * (i + 1))))
        return (NULL);
    s[i] = '\0';
    number = (value < 0) ? -(long)value : value;
    while (--i >= 0)
    {
        s[i] = (number % base < 10) ? number % base + '0' : number % base + 'A' - 10;
        number /= base;
    }
    if (1 == sign)
        s[++i] = '-';
    return (s);
}

/*
#include <stdio.h>

int     main(int ac, char **av)
{
    if (3 == ac)
        printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));
    return (0);
}
*/