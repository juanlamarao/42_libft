/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:56:48 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/24 11:38:30 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*n_dst;
	const	char	*n_src;

	n_dst = dst;
	n_src = src;
	while (n)
	{
		if (*n_src == c)
		{
			*n_dst = *n_src;
			return (n_dst + 1);
		}
		*n_dst++ = *n_src++;
		n--;
	}
	return (NULL);
}
