/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:10:58 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 20:11:00 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ws(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static char	*ft_strndup(const char *s1, int n)
{
	char	*dst;
	char	*p;

	dst = ft_strnew(n);
	if (!dst)
		return (0);
	p = dst;
	while (*s1 && n > 0)
	{
		*p++ = *s1++;
		l--;
	}
	*p = 0;
	return (dst);
}

char		*ft_strtrim(char const *s)
{
	int l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	while (ws(s[l - 1]))
		--l;
	while (*s && ws(*s))
	{
		s++;
		l--;
	}
	return (ft_strndup(s, l));
}
