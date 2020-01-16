/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:02:25 by exam              #+#    #+#             */
/*   Updated: 2020/01/11 12:02:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char *s;

    j = 0;
    i = ft_strlen(str);
    if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    while (--i >= 0)
        s[j++] = str[i];
    s[j] = '\0';
    free (str);
    str = NULL;
    return (s);
}

char    *ft_itoa(int nbr)
{
    int     i;
    int     sign;
    char    *s;

    i = 0;
    sign = 1;
    if (0 == nbr)
        return ("0");
    if (-2147483648 == nbr)
        return ("-2147483648");
    if (nbr < 0)
    {
        nbr *= -1;
        sign = -1;
    }
    if (!(s = (char *)malloc(sizeof(char) * 12)))
        return (NULL);
    while (nbr / 10)
    {
        s[i] = nbr % 10 + '0';
        nbr = nbr / 10;
        i++;
    }
    s[i] = nbr % 10 + '0';
    i++;
    if (-1 == sign)
    {
        s[i] = '-';
        i++;
    }
    s[i] = '\0';
    return (ft_strrev(s));
}
