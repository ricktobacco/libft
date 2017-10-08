/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 17:43:50 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/22 17:45:41 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;
	int		i;

	cdst = (char *)dst;
	csrc = (char *)src;
	i = -1;
	if (cdst > csrc)
		while ((int)len > 0)
		{
			*(cdst + len) = *(csrc + len);
			len--;
		}
	else
		while (++i < (int)len)
			*(cdst + i) = *(csrc + i);
	return (dst);
}
