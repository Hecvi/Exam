/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:22:21 by klaurine          #+#    #+#             */
/*   Updated: 2019/10/23 14:22:52 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1 && *s2)
    {
        s1++;
        s2++;
    }
    return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int     main(void)
{
    char *s1 = "\200";
    char *s2 = "\0";

    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}
*/
