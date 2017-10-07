/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:43:50 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 17:45:41 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;
	char	*p;

	len = ft_strlen(s1);
	dst = ft_strnew(len);
	if (!dst)
		return (0);
	p = dst;
	while (*s1)
		*p++ = *s1++;
	*p = 0;
	return (dst);
}
