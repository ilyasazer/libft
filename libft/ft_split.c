/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:55:39 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/23 17:54:55 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	inlen;

	len = 0;
	i = 0;
	while (s[i])
	{
		inlen = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] && s[i] != c)
		{
			if (inlen == 0)
			{
				len++;
				inlen = 1;
			}
			i++;
		}
	}
	return (len);
}

static char	**free_all(size_t j, char **str)
{
	while (j > 0)
	{
		j--;
		free(str[j]);
	}
	free(str);
	return (NULL);
}

static char	**fill(size_t len, const char *s, char **str, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		str[j] = ft_substr(s, start, i - start);
		if (str[j] == NULL)
			return (free_all(j, str));
		j++;
	}
	str[len] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**str;

	if (s == NULL)
		return (NULL);
	len = count_words(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (str == NULL)
		return (NULL);
	return (fill(len, s, str, c));
}
