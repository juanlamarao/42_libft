/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 15:37:13 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/22 14:13:55 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				index;
	const	char	*new_s;

	new_s = s;
	index = -1;
	while (n--)
	{
		index++;
		if (*new_s++ == c)
			return ((void *)s + index);
	}
	return (NULL);
}
