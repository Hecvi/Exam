/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:55:00 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/21 17:15:10 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int j;
	int check[256] = {0};

	if (3 == ac)
	{
		j = 0;
		while (av[1][j])
		{
			if (0 == check[(int)av[1][j]])
			{
				i = 0;
				check[(int)av[1][j]] = 1;
				while (av[2][i])
				{
					if (av[1][j] == av[2][i])
					{
						write(1, &av[1][j], 1);
						break ;
					}
					i++;
				}
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
