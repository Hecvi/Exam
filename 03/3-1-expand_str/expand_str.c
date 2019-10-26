/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:35:05 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/24 20:08:55 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		num_of_words(char *s)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i])
		{
			if (s[i] != ' ' && s[i] != '\t' &&
					(' ' == s[i + 1] || '\t' == s[i + 1] || '\0' == s[i + 1]))
				words++;
			i++;
		}
	return (words);
}

void	print_words(char *s, int words)
{
	int i;

	i = 0;
	while (words)
	{
		if (s[i] != ' ' && s[i] != '\t')
		{
			while (s[i] != ' ' && s[i] != '\t' && s[i])
			{
				write(1, &s[i], 1);
				i++;
			}
			if (words > 1)
				write(1, "   ", 3);
			words--;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (2 == ac)
		print_words(av[1] , num_of_words(av[1]));
	write(1, "\n", 1);
	return (0);
}
