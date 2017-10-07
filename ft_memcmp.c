/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 17:43:50 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/22 17:45:41 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int 			i;
	unsigned char	*m1;
	unsigned char	*m2;

	if (!n)
		return (0);
	i = 0;
	m1 = (unsigned char*)s1;
	m2 = (unsigned char*)s2;
	while (i < (int)n)
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}
	return (0);
}
