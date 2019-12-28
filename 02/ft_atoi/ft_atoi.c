/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:38:15 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 19:14:36 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int		ft_atoi(const char *str)
{
	int			sign;
	long int	digit;

	sign = 1;
	digit = 0;
	while ('\n' == *str || '\t' == *str || '\v' == *str || '\f' == *str ||
			'\r' == *str || ' ' == *str)
		str++;
	if ('-' == *str)
		sign = -1;
	if ('-' == *str || '+' == *str)
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		digit = digit * 10 + (*str - '0');
		str++;
	}
	return (sign * (int)digit);
}

/*
int main(void)
{
	printf("%d\n", ft_atoi(" + 123456123456789s"));
	printf("%d\n", atoi(" + 123456123456789s"));
	return (0);
}
*/
