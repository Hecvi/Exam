/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:00:53 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/24 17:26:30 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (1 == ac)
		write(1, "\n", 1);
	else
	{
		while (i <= ac - 1)
		{
			j = 0;
			while (av[i][j])
			{
				if ('A' <= av[i][j] && av[i][j] <= 'Z')
					av[i][j] += 32;
				if ('a' <= av[i][j] && av[i][j] <= 'z' && '\0' == av[i][j + 1])
					av[i][j] -= 32;
				else if ('a' <= av[i][j] && av[i][j] <= 'z' &&
						(' ' == av[i][j + 1] || '\t' == av[i][j + 1]))
					av[i][j] -= 32;
				write(1, &av[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
