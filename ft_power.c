/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:22:53 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/23 12:24:40 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int n, int power)
{
	int count;
	int powerbase;

	count = 1;
	powerbase = n;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (n);
	else
	{
		while (count != power)
		{
			n = n * powerbase;
			count++;
		}
		return (n);
	}
}
