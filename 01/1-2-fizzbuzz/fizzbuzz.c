/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FizzBuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:02:49 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/26 15:48:03 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 15) == 0)
			write(1, "FizzBuzz\n", 9);
		else if ((i % 3) == 0)
			write(1, "Fizz\n", 5);
		else if ((i % 5) == 0)
			write(1, "Buzz\n", 5);
		else if (i < 100)
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
