/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 17:43:50 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/22 17:45:41 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *restrict src, int c, size_t n)
{
	int i;

	i = 0;
	while (i++ < (int)n)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		if (*(unsigned char*)dst == (unsigned char)c)
			return (dst + 1);
		dst++;
		src++;
	}
	return (NULL);
}
