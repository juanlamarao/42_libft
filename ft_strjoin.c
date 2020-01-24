/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanlamarao <juolivei@42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:32:34 by juanlamar         #+#    #+#             */
/*   Updated: 2020/01/24 16:03:43 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		full_len;
	char	*new_str;

	full_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_str = (char *)ft_calloc((full_len + 1), sizeof(*s1))))
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}
