/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:15:14 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/16 18:41:18 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		b;
	size_t				i;

	str = (const unsigned char *) s;
	i = 0;
	b = c;
	while (i < n)
	{
		if (str[i] == b)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
