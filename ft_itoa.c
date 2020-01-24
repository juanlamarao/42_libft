/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:55:49 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/24 13:25:11 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numlen(long n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*s;
	long	n_n;

	i = -1;
	n_n = n;
	len = ft_numlen(n_n);
	if (!(s = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	if (n_n < 0)
	{
		s[0] = '-';
		n_n *= -1;
		i++;
	}
	s[len] = '\0';
	while (--len > i)
	{
		s[len] = (n_n % 10) + 48;
		n_n /= 10;
	}
	return (s);
}
