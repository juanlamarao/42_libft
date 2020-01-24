/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:26:13 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/23 15:05:27 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chrcmp(const char c, const char *s)
{
	int	size;

	size = ft_strlen(s);
	while (--size >= 0)
		if (c == s[size])
			return (1);
	return (0);
}
