/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:52:34 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/07 18:24:52 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	while ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) ||
			(ch >= 48 && ch <= 57))
		return (ch);
	return (0);
}
