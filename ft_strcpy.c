/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:31:05 by juolivei          #+#    #+#             */
/*   Updated: 2020/01/23 13:41:24 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int number;

	number = 0;
	while (src[number] != '\0')
	{
		dest[number] = ((char *)src)[number];
		number++;
	}
	dest[number] = ((char *)src)[number];
	return (dest);
}
