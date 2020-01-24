/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:11:12 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/22 17:32:16 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i]) && (s2[i]) && (s1[i] == s2[i]))
		i++;
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
