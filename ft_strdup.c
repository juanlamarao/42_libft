/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanlamarao <juolivei@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:16:46 by juanlamar         #+#    #+#             */
/*   Updated: 2020/01/23 08:49:42 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		s_len;
	char	*new_s;

	s_len = ft_strlen(s);
	if (!(new_s = malloc((s_len + 1) * sizeof(char))))
		return (NULL);
	while (s_len >= 0)
	{
		new_s[s_len] = (char)s[s_len];
		s_len--;
	}
	return (new_s);
}
