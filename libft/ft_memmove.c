/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:40:20 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/15 16:04:38 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = dest;
	str2 = src;
	if (dest < src)
	{
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			str1[n] = str2[n];
		}
	}
	return (dest);
}
