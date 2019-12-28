/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:00:53 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/26 18:26:46 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int c;

	if (!a || !b)
		return (0);
	i = a * b;
	while (i >= a && i >= b)
	{
        if (!(i % a) && !(i % b))
            c = i;
        i--;
    }
	return (c);
}

/*
int				main(void)
{
	printf("%d", lcm(10, 20));
	return (0);
}
*/