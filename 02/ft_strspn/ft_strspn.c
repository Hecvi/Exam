/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:06:01 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/06 15:45:35 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

size_t	ft_strspn(const char *s1, const char *s2)
{
	int		i;
	int		sign;
	size_t	count;

	count = 0;
	while (*s1)
	{
		i = 0;
		sign = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
			{
				count++;
				sign = 1;
			}
			i++;
		}
		if (sign != 1)
			return (count);
		s1++;
	}
	return (count);
}

/*
int		main(void)
{
	char *s1 = "Hello World!";
	char *s2 = "Hello World!";

	printf("%lu\n", ft_strspn(s1, s2));
	printf("%lu", strspn(s1, s2));
	return (0);
}
*/
