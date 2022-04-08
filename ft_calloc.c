/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxhomme <maxhomme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:05:38 by mahommel          #+#    #+#             */
/*   Updated: 2022/04/04 15:45:22 by maxhomme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int		i;

	i = 0;
	str = malloc(size * count);
	if (!str)
		return (0);
	while ((int)(count * size) > i)
	{
		*(char *)(str + i) = 0;
		i++;
	}
	return (str);
}
