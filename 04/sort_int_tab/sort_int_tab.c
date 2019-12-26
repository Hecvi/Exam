/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 17:02:19 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/25 17:02:26 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int max;
	int tmp;

	i = 0;
	if (!tab)
		return ;
	while (i < size)
	{
		max = 0;
		while (i < size)
		{
			if (tab[i] > tab[max])
				max = i;
			i++;
		}
		tmp = tab[size - 1];
		tab[size - 1] = tab[max];
		tab[max] = tmp;
		size--;
		i = 0;
	}
}

/*
int		main(void)
{
	int i;
	unsigned int size;
	int tab[] = {-1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648};

	i = 0;
	size = 11;
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("element %d: %d\n", i, tab[i]);
		i++;
	}
	return 0;
}
*/