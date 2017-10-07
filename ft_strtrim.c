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
	int		i;

	i = 0;
	dst = ft_strnew(ft_strlen(s1) + 1);
	if (!dst)
		return (0);
	p = dst;
	while (*s1 && i < n)
	{
		*p++ = *s1++;
		i++;
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
