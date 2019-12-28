/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:03:29 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/30 19:38:51 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
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

void	change_number(int number)
{
    if (number >= 16)
        change_number(number / 16);
    ft_putchar(number % 16 < 10 ? number % 16 + '0' : 'a' + number % 16 - 10);
}

int		main(int ac, char **av)
{
    int num;

    if (2 == ac)
    {
        num = mini_atoi(av[1]);
        change_number(num);
    }
    write(1, "\n", 1);
    return (0);
}
