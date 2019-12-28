/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:31:19 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 18:50:21 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s2)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(void)
{
	char *s2 = "Hello!";
	char *s1;

	if (!(s1 = (char *)malloc(sizeof(char) * 7)))
		return (0);
	printf("%s", ft_strcpy(s1, s2));
	return (0);
}
