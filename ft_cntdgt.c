/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntdgt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmacias <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:55:31 by tmacias           #+#    #+#             */
/*   Updated: 2019/10/18 17:44:34 by tmacias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cntdgt(long n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter++;
		n *= -1;
	}
	if (n == 0)
		counter++;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
