/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:16:49 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/16 13:26:22 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	b;

	b = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == b)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (b == '\0')
		return ((char *)(&s[i]));
	return (NULL);
}
