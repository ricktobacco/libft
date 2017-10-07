/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:08:18 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/20 16:46:24 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	size;
	size_t	i;

	if (!f || !s)
		return (0);
	size = ft_strlen(s);
	new = ft_strnew(size);
	if (!new)
		return (0);
	i = -1;
	while (++i < size)
		new[i] = f(i, s[i]);
	return (new);
}
