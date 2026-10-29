/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:42:12 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/18 18:06:06 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		l;

	l = ft_strlen(s) + 1;
	str = malloc(sizeof(char) * l);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, l);
	return (str);
}
