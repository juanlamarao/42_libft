/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:32:42 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/23 13:41:07 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int sizedest;
	int sizesrc;
	int total;
	int nsrc;

	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	total = sizesrc + sizedest;
	nsrc = 0;
	while (sizedest < total)
	{
		dest[sizedest] = ((char *)src)[nsrc];
		sizedest++;
		nsrc++;
	}
	dest[sizedest] = '\0';
	return (dest);
}
