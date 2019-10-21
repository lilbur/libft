/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 15:09:54 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 18:29:30 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			len;
	size_t			i;
	char			*sc;

	if (!s)
		return (NULL);
	i = 0;
	sc = (char *)s;
	len = ft_strlen(s);
	while (*sc)
	{
		if (*sc == c)
			return (sc);
		sc++;
	}
	if (!(*sc) && c == '\0')
		return (sc);
	return (NULL);
}
