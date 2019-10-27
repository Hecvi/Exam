/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:26:52 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/27 15:54:26 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
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

void	print_sum(int i)
{
	if (i > 9)
		print_sum(i / 10);
	ft_putchar(i % 10 + '0');
}

int		main(int ac, char **av)
{
	int i;
	int sum;
	int number;

	i = 0;
	sum = 0;
	number = 0;
	if (1 == ac || *av[1] == '-')
		write(1, "0", 1);
	else
	{
		number = ft_atoi(av[1]);
		while (i <= number)
		{
			if (i == 2 || i == 3 || i == 5 || i == 7)
				sum += i;
			else if (i != 1 && (i % 2 != 0) && (i % 3 != 0) &&
					(i % 5 != 0) && (i % 7 != 0))
				sum += i;
			i++;
		}
		print_sum(sum);
	}
	write(1, "\n", 1);
	return (0);
}
