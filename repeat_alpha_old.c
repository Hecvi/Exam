/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 14:31:45 by klaurine          #+#    #+#             */
/*   Updated: 2019/03/21 12:42:45 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_povtor(char c)
{
	int povtor;

	if (c >= 'a' && c <= 'z')
		povtor = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		povtor = c - 'A' + 1;
	else
		povtor = 1;
	return (povtor);
}

int		main(int argc, char **argv)
{
	int i;
	int povtor;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			povtor = ft_povtor(argv[1][i]);
			while (povtor > 0)
			{
				write(1, &argv[1][i], 1);
				povtor--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
		return (0);
}
