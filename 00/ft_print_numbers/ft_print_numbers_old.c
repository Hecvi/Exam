/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 20:15:37 by klaurine          #+#    #+#             */
/*   Updated: 2019/03/10 20:29:31 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}