/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:50:40 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 20:27:19 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i;

	if (!len)
		return (0);
	i = tab[0];
	while (--len)
		if (i < tab[len])
			i = tab[len];
	return (i);
}

/*
int		main(void)
{
	int tab[10] = {10, 1, -2, 3, 0, 7, 22, 43, 43, 0};

	printf("%d", max(tab, 10));
	return (0);
}
*/
