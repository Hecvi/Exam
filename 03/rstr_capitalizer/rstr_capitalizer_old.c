/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 19:18:37 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 16:47:35 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_low(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
	return (s);
}

char *ft_upp(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i + 1] == '\0' && 
				s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		else if ((s[i] == ' ' || s[i] == '\t') && (s[i - 1] != ' ' &&
				s[i - 1] != '\t'))
		{
			if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
				s[i - 1] = s[i - 1] - 32;
		}
		i++;
	}
	return (s);
}

int		main(int ac, char **a)
{
	int i;
	int j;

	if (ac > 1)
	{
		j = 1;
		while (j < ac)
		{
			i = 0;
			while (a[j][i])
			{
				a[j] = ft_low(a[j]);
				a[j] = ft_upp(a[j]);
				write(1, &a[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
