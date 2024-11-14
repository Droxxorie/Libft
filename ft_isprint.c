/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:52:49 by marvin            #+#    #+#             */
/*   Updated: 2024/11/12 17:52:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c);

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}