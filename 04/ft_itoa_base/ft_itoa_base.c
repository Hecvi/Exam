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
    if (value < 0)
        number = -(long)value;
    i = (1 == sign) ? 2 : 1;
    while (number > 9)
    {
        i++;
        number /= 10;
    }
    if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    









}