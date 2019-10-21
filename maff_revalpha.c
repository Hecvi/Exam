/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:51:11 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/18 16:30:13 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char bukvi_up;
	char bukvi;

	bukvi_up = 'Y';
	bukvi = 'z';
	while (bukvi_up >= 'A')
	{
		write(1, &bukvi, 1);
		write(1, &bukvi_up, 1);
		bukvi_up -= 2;
		bukvi -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
