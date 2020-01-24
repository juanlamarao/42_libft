/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanlamarao <juolivei@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:13:54 by juanlamar         #+#    #+#             */
/*   Updated: 2020/01/24 13:24:17 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** o len é sem o \0? se não remover o + 1 do malloc
** adicionar um if start == 0?
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	i = 0;
	if (!(sub_s = (char *)ft_calloc((len + 1), sizeof(char))))
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (sub_s);
	sub_s[len] = '\0';
	while (i < len)
	{
		sub_s[i] = ((char *)s)[start];
		i++;
		start++;
	}
	return (sub_s);
}
