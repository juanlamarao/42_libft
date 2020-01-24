/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:42:18 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/24 12:58:48 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*n_dst;
	const	char	*n_src;

	i = 0;
	n_dst = dst;
	n_src = src;
	while (i < n)
	{
		n_dst[i] = n_src[i];
		i++;
	}
	return (dst);
}
