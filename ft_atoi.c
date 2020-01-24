/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 16:55:45 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/24 12:56:36 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		sign;
	int		index;
	long	number;

	sign = 1;
	index = 0;
	number = 0;
	while ((str[index] > 8 && str[index] < 14) || (str[index] == 32))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		sign = (str[index] == '-') ? -1 : 1;
		index++;
	}
	while (str[index] > 47 && str[index] < 58)
	{
		number *= 10;
		number += str[index++] - 48;
	}
	return (number * sign);
}
