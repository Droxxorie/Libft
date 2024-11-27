/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:24:30 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 16:24:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s);

char *ft_strdup(const char *s)
{
    int i;
    char *dup;

    i = 0;
    while (s[i])
        i++;
    dup = malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (0);
    i = 0;
    while (s[i])
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
/*
int main(void)
{
    char *str = "Hello";
    printf("str : %s\n", str);
    printf("original : %s\n", strdup(str));
    printf("ft : %s\n", ft_strdup(str));
}
*/