/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 18:29:11 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/28 18:30:04 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     counter_words(const char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] &&
        (' ' == str[i + 1] || '\t' == str[i + 1] || '\n' == str[i + 1] ||
        '\0' == str[i + 1]))
            count++;
        i++;
    }
    return (count);
}

int     counter_letters(const char *str, int i)
{
    int count;

    count = 0;
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
    {
        count++;
        i++;
    }
    return (count);
}

void    *freechar(char **s, int j)
{
    j--;
    while (j >= 0)
    {
        free(s[j]);
        s[j] = NULL;
        j--;
    }
    free(s);
    s = NULL;
}

char    **ft_split(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **s;

   if (!str)
       return (NULL);
   i = 0;
   if (!(s = (char **)malloc(sizeof(char *) * (counter_words(str) + 1))))
       return (NULL);
   while ((' ' == str[i] || '\t' == str[i] || '\n' == str[i]) && str[i])
       i++;
   j = 0;
   while (str[i])
   {
       k = 0;
       if (!(s[j] = (char *)malloc(sizeof(char) * (counter_letters(str, i) + 1))))
           return (freechar(s, j));
       while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
       {
           s[j][k] = str[i];
           i++;
           k++;
       }
       s[j][k] = '\0';
       j++;
       if (!str[i])
       {
           s[j] = NULL;
           return (s);
       }
       i++;
   }
   s[j] = NULL;
   return (s);
}

#include <stdio.h>

int     main(void)
{
    int i;
    int count;
    char *s = "   Hell is coming ! ";
    char **str;

    i = 0;
    str = ft_split(s);
    count = counter_words(s);
    while (i <= count)
        printf("%s\n", str[i++]);
    return (0);
}
