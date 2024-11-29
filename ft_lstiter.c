/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:34:04 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 11:34:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *));

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
/*
void ft_print(void *content)
{
    if (!content)
        return;
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *node1 = ft_lstnew("hello world");
    t_list *node2 = ft_lstnew("hello world");
    t_list *node3 = ft_lstnew("hello world");

    node1->next = node2;
    node2->next = node3;
    ft_lstiter(node1, ft_print);
}
*/