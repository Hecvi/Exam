/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a_z.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:11:37 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/18 16:12:57 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return (0);
}
