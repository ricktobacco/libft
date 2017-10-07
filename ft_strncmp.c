/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:11:29 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 20:11:31 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char*)s2);
		s1++;
		s2++;
	}
	return (0);
}
