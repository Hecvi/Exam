/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 14:12:56 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 16:47:17 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char rev;

	rev = 0;
	rev = rev | (octet & 1) << 7;
	rev = rev | (octet & 2) << 5;
	rev = rev | (octet & 4) << 3;
	rev = rev | (octet & 8) << 1;
	rev = rev | (octet & 16) >> 1;
	rev = rev | (octet & 32) >> 3;
	rev = rev | (octet & 64) >> 5;
	rev = rev | (octet & 128) >> 7;
	return (rev);
}

int		main(void)
{
	printf("%c", reverse_bits('&'));
	printf("\n");
	return (0);
}
