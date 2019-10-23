/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:33:42 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 19:50:29 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (4 == ac)
	{
		if ('+' == *av[2])
			return (printf("%d\n", (atoi(av[1]) + atoi(av[3]))));
		if ('-' == *av[2])
			return (printf("%d\n", (atoi(av[1]) - atoi(av[3]))));
		if ('*' == *av[2])
			return (printf("%d\n", (atoi(av[1]) * atoi(av[3]))));
		if ('/' == *av[2])
			return (printf("%d\n", (atoi(av[1]) / atoi(av[3]))));
		if ('%' == *av[2])
			return (printf("%d\n", (atoi(av[1]) % atoi(av[3]))));
	}
	printf("\n");
	return (0);
}
