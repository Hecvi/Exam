/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 08:25:29 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 18:39:22 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char bukvi;
	char big_bukvi;

	bukvi = 'z';
	big_bukvi = 'Y';
	while (bukvi >= 'a')
	{
		ft_putchar(bukvi);
		if (big_bukvi >= 'A')
			ft_putchar(big_bukvi);
		bukvi = bukvi - 2;
		big_bukvi = big_bukvi - 2;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
