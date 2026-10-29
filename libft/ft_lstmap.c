/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilazerou <ilazerou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 19:15:38 by ilazerou          #+#    #+#             */
/*   Updated: 2026/10/28 19:10:09 by ilazerou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*content;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		newnode = ft_lstnew(content);
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
