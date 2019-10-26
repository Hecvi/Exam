/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:07:10 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/26 13:42:35 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i * i < n && i <= 65535)
		i++;
	return (n == i * i ? 1 : 0);
}

int		main(void)
{
	printf("%d", is_power_of_2(-0));
	return (0);
}
