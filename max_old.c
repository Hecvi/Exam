/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 23:23:21 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 16:46:38 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	unsigned i;
	int j;

	i = 0;
	j = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > j)
			j = tab[i];
		i++;
	}
	return (j);
}

int		main(void)
{
	int *tab;
	int len;

	len = 3;
	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = -1;
	tab[1] = 0;
	tab[2] = 2;
	printf("%d", max(tab, 3));
	return (0);
}
