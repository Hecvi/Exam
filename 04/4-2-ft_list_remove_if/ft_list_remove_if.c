/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:12:37 by klaurine          #+#    #+#             */
/*   Updated: 2019/12/25 14:55:07 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int cmp(void *data, void *data_ref)
{
    int *i = data;
    int *j = data_ref;

    if (*i == *j)
        return (0);
    return (1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *list;
    t_list  *tmp;
    t_list	*tmp_next;

    list = *begin_list;
    while (list && 0 == cmp(list->data, data_ref))
    {
        tmp = list;
        list = list->next;
        free(tmp->data);
        free(tmp);
    }
    *begin_list = list;
    while (list)
    {
        tmp = list->next;
        if (tmp && 0 == cmp(tmp->data, data_ref))
        {
        	tmp_next = tmp->next;
        	while (tmp_next && 0 == cmp(tmp_next->data, data_ref))
			{
        		tmp = tmp_next;
				tmp_next = tmp_next->next;
				free(tmp->data);
				free(tmp);
			}
        	list = tmp->next;
        	free(tmp->data);
        	free(tmp);
        	(*begin_list)->next = list;
        }
        else if (!tmp && 0 == cmp(tmp->data, data_ref))
		{

		}
		else if (!tmp && cmp(tmp->data, data_ref))
		{

		}
		else if (tmp && cmp(tmp->data, data_ref))
			list = tmp;
    }
}

/* мы переходим через лист, не зная хороший ли он или нетЮ. для проверки нам нужна еще
 * одна переменная */
int main(void)
{
    t_list *list;
    int i = 1;
    int j = 2;

    list = (t_list*)malloc(sizeof(t_list));
    list->data = &j;
    list->next = (t_list*)malloc(sizeof(t_list));
    list->next->data = &j;
    list->next->next = (t_list*)malloc(sizeof(t_list));
    list->next->next->data = &i;
    list->next->next->next = (t_list*)malloc(sizeof(t_list));
    list->next->next->next->data = &i;
    list->next->next->next->next = NULL;
    ft_list_remove_if(&list, &j, cmp);
    while (list)
    {
        printf("%d\n", *(int*)list->data);
        list = list->next;
    }
    return (0);
}
