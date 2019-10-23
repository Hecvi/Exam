/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:01:09 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 14:19:59 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int             i;
    unsigned char   mask;

    i = 7;
    while (i >= 0)
    {
        mask = (1 & (octet >> i)) + '0';
        write(1, &mask, 1);
        i--;
    }
}

/*
int     main(void)
{
    unsigned char c;

    c = '!';
    print_bits(c);
    write(1, "\n", 1);
    return (0);
}
 */
