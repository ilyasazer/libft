/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:30:37 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/28 19:11:30 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			size;

	nb = n;
	size = count_n(nb) + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	str[size - 1] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[size - 2] = nb % 10 + '0';
		nb = nb / 10;
		size--;
	}
	return (str);
}
