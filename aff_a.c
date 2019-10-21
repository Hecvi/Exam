/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:11:40 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/18 15:44:38 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "a", 1);
	else
		while (*av[1])
		{
			if ('a' == *av[1])
			{
				write(1, &(*av[1]), 1);
				break ;
			}
			av[1]++;
		}
	write(1, "\n", 1);
	return (0);
}
