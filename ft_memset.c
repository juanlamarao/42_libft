/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:50:38 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/21 13:46:40 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** verificar o erro que não ocorre quando len > tamanho do de b
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *begin;

	begin = b;
	while (len > 0)
	{
		*begin = c;
		begin++;
		len--;
	}
	return (b);
}
