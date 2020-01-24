/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanlamarao <juolivei@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 19:47:23 by juanlamar         #+#    #+#             */
/*   Updated: 2020/01/23 10:38:13 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

	full_size = nmemb * size;
	if (!(ptr = malloc(full_size)))
		return (NULL);
	ft_memset(ptr, 0, full_size);
	return (ptr);
}
