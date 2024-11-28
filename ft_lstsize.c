/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:44:51 by marvin            #+#    #+#             */
/*   Updated: 2024/11/28 11:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst);

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
/*
int main(void)
{
    int data1 = 10;
    int data2 = 20;
    int data3 = 30;
    t_list *node1 = ft_lstnew(&data1);
    t_list *node2 = ft_lstnew(&data2);
    t_list *node3 = ft_lstnew(&data3);

    node1->next = node2;
    node2->next = node3;
    printf("size of list : %i\n", ft_lstsize(node1));
}
*/