/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 09:14:58 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/23 19:10:26 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	i;
	size_t	len;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	len = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (destsize < d_len)
		return (s_len + destsize);
	while (src[i] && ((d_len + i + 1) < destsize))
	{
		dst[d_len + i] = ((char *)src)[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (s_len + d_len);
}
