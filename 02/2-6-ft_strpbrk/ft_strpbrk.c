/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:48:40 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/06 15:25:14 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}
/*
int		main(void)
{
	char *s1 = "Hello World";
	char *s2 = "accckl;asd";

	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s", strpbrk(s1, s2));
	return (0);
}
*/
