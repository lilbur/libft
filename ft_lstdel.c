/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 00:35:15 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/19 05:32:38 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;

	if (!alst)
		return ;
	while (*alst)
	{
		new = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = new;
	}
	alst = NULL;
}
