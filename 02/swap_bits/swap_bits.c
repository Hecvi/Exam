/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:00:16 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 20:38:22 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

/*
int				main(void)
{
	char c;

	c = 't';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
*/
