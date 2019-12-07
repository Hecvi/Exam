/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:28:15 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 16:29:54 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int     i;
	int     j;
	char    c;

	i = 0;
	j = 0;
	if (NULL == str)
		return (NULL);
	while (str[i + 1])
		i++;
	while (i > j)
	{
	    c = str[j];
	    str[j] = str[i];
	    str[i] = c;
	    i--;
	    j++;
	}
	return (str);
}

/*
int     main(void)
{
    char *s;

	if (!(s = (char *)malloc(sizeof(char) * 6)))
		return (0);
	s[0] = 'H';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	s[4] = 'o';
	s[5] = '\0';
    printf("%s", ft_strrev(s));
    return (0);
}
*/
