/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 19:55:07 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 19:04:00 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (2 == ac)
	{
		while ((' ' == *av[1] || '\t' == *av[1]) && *av[1])
			av[1]++;
		while (*av[1] != ' ' && *av[1] != '\t' && *av[1])
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
