/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bukvi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 08:25:29 by klaurine          #+#    #+#             */
/*   Updated: 2019/03/14 18:15:14 by klaurine         ###   ########.fr       */
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
	char BUKVI;

	bukvi = 'z';
	BUKVI = 'Y';
	while (bukvi >= 'a')
	{
		ft_putchar(bukvi);
		if (BUKVI >= 'A')
		ft_putchar(BUKVI);
		bukvi = bukvi - 2;
		BUKVI = BUKVI - 2;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
