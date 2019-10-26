/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:59:55 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 14:00:03 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char mask;

    i = 0;
    while (i < 8)
    {
        mask = mask | (((octet >> i) & 1) << (7 - i));
        i++;
    }
    return (mask);
}

/*
int		main(void)
{
    char c;

    c = '>';
    write(1, &c, 1);
    write(1, "\n", 1);
    c = reverse_bits(c);
    write(1, &c, 1);
    write(1, "\n", 1);
    return (0);
}
*/
