/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:26:52 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/12 15:11:25 by klaurine         ###   ########.fr       */
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
	int x;
	int sum;
	int count;
	int number;

	x = 2;
	sum = 0;
	number = 0;
	if (1 == ac || *av[1] == '-')
		write(1, "0", 1);
	else
	{
		number = ft_atoi(av[1]);
		while (x <= number)
		{
		    i = 1;
            count = 0;
		    while (i++ <= x)
		        if (0 == x % i)
		            count++;
		        if (count == 1)
		            sum += x;
		        x++;
		}
		print_sum(sum);
	}
	write(1, "\n", 1);
	return (0);
}
