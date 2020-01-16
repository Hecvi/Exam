/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:18:28 by klaurine          #+#    #+#             */
/*   Updated: 2020/01/15 19:18:32 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int     cycle_detector(const t_list *list)
{
    const t_list *behind;
    const t_list *ahead;

    behind = list;
    ahead = list;
    while (ahead)
    {
        ahead = ahead->next;
        behind = behind->next;
        if (ahead)
            ahead = ahead->next;
        else
            return (0);
        if (behind == ahead)
            return (1);
    }
    return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;
    t_list *node5;

    node1 = (t_list *)malloc(sizeof(t_list));
    node2 = (t_list *)malloc(sizeof(t_list));
    node3 = (t_list *)malloc(sizeof(t_list));
    node4 = (t_list *)malloc(sizeof(t_list));
    node5 = (t_list *)malloc(sizeof(t_list));
    node1->data = 1;
    node1->next = node2;
    node2->data = 2;
    node2->next = node3;
    node3->data = 3;
    node3->next = node4;
    node4->data = 4;
    node4->next = node5;
    node5->data = 5;
    node5->next = node1;

    printf("%d\n", cycle_detector(node1));
    return (0);
}
*/