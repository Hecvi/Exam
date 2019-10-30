/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 19:05:46 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/28 16:10:09 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int i;

	if (3 == ac)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		i = (a >=b ? b : a);
		while (i > 0)
		{
			if (0 == (a % i) && 0 == (b % i))
				return (printf("%d\n", i));
			i--;
		}
	}
	printf("\n");
	return (0);
}
