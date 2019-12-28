/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:45:34 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/29 17:53:12 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	mini_putnbr(int i)
{
	if (i > 9)
		mini_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}

int		mini_atoi(char *s)
{
	int number;

	number = 0;
	while (*s && '0' <= *s && *s <= '9')
	{
		number = number * 10 + *s - '0';
		s++;
	}
	return (number);
}

int		main(int ac, char **av)
{
	int i;
	int num;

	i = 1;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		num = mini_atoi(av[1]);
		while (i <= 9)
		{
			mini_putnbr(i);
			write(1, " x ", 3);
			mini_putnbr(num);
			write(1, " = ", 3);
			mini_putnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
