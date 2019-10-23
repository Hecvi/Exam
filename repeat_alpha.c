/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:49:06 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/18 17:17:48 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	if (2 == ac)
	{
		while (*av[1])
		{
			i = 1;
			if ('a' <= *av[1] && *av[1] <= 'z')
				i = *av[1] - 'a' + 1;
			else if ('A' <= *av[1] && *av[1] <= 'Z')
				i = *av[1] - 'A' + 1;
			while (i > 0)
			{
				write(1, av[1], 1);
				i--;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
