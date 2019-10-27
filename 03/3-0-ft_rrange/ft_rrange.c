/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:59:15 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/27 17:42:45 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		*m;
	int		len;

	len = (start >= end ? start - end + 1 : end - start + 1);
	if (!(m = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (len--)
		m[len] = (start >= end ? start-- : start++);
	return (m);
}

/*
int		main(void)
{
	int start;
	int len;
	int end;
	int *m;
	int i;

	start = 0;
	end = -3;
	i = 0;
	m = ft_rrange(start, end);
	len = (start >= end ? start - end + 1 : end - start + 1);
	while (i < len)
		printf("%d ", m[i++]);
	return (0);
}
*/
