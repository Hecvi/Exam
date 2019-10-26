/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:18:48 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 20:58:30 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int c)
{
	if (c > 9)
		ft_putnbr(c / 10);
	ft_putchar(c % 10 + '0');
}

int		main(int ac, char **av)
{
	av = NULL;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
