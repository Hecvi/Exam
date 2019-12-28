/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 22:03:01 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 19:11:59 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
			write(1, "\n", 1);
		else
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
		}
	}
	return (0);
}
