/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:15:37 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/19 05:34:48 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*ptr;

	if (ft_strlen(h) < (ft_strlen(n)))
		return (NULL);
	if (!*n)
		return ((char *)h);
	while (*h && len)
	{
		ptr = (char	*)h;
		while (*h == *n && len > 0)
		{
			h++;
			n++;
			if (!*n)
				return (ptr);
			len--;
		}
		h++;
		len--;
	}
	return (NULL);
}
