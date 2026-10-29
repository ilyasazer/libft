/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:28:31 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/19 14:26:29 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	b;

	b = c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == b)
			return ((char *)&s[i]);
		else
			i--;
	}
	return (NULL);
}
