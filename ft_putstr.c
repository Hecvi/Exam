/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 20:48:14 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/21 20:27:32 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (NULL == str)
		return ;
	while (*str)
		write(1, str++, 1);
}

/*
int		main(void)
{
	char *s = "Hello!";
		ft_putstr(s);
	return (0);
}
*/
