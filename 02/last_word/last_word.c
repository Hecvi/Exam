/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:15:55 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 20:17:32 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		space_tab(char c)
{
	return (' ' == c || '\t' == c ? 1 : 0);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (2 == ac && av[1][i])
	{
		while (av[1][i])
			i++;
		i--;
		while (space_tab(av[1][i]) && i >= 0)
			i--;
		while (!space_tab(av[1][i]) && i >= 0)
			i--;
		i++;
		while (!space_tab(av[1][i]) && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
