/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 23:49:52 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 23:50:23 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int last;
	int i;

	i = -1;
	last = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			last = i;
	if (c == 0)
		last = i;
	return (last != -1 ? (char *)(s + last) : 0);
}
