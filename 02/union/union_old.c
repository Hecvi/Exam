/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 13:28:46 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 20:44:27 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_povtor(char *str, char a, int b)
{
	int i;
	int povtor;

	i = 0;
	povtor = 0;
	while (str[i] && i <= b)
	{
		if (str[i] == a)
			povtor++;
		i++;
	}
	return (povtor);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && ft_povtor(av[1], av[1][i], i) == 1
						&& ft_povtor(av[2], av[2][j], j) == 1)
					write(1, &av[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
