/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:26:42 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/11 19:05:01 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		return_yes(char s, int base)
{
	char digitsl[17] = "0123456789abcdef";
	char digitsh[17] = "0123456789ABCDEF";

	while (base--)
		if (digitsl[base] == s || digitsh[base] == s)
			return (1);
	return (0);
}

int		return_char(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
}

int		ft_atoi_base(const char *str, int str_base)
{
	long long	res;
	long long	sign;

	res = 0;
	while ('\n' == *str || '\t' == *str || '\v' == *str || '\f' == *str ||
			'\r' == *str || ' ' == *str)
		str++;
	sign = ('-' == *str ? -1 : 1);
	('-' == *str || '+' == *str) ? str++ : 0;
	while (*str && return_yes(*str, str_base))
	{
		res = res * str_base + return_char(*str);
		str++;
	}
	return (res * sign);
}

int		main(void)
{
	char *str = "-123456789fedcba";

	printf("% d", ft_atoi_base(str, 10));
	return (0);
}
