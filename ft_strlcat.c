/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 23:49:52 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 23:50:23 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
    unsigned int    len;
    int      space_left;
    char		     *d;
    const char	     *s;

    d = dst;
    space_left = (int)dstsize;
    if (space_left < 0)
        return (0);
    while (*d && space_left-- > 1)
        d++;
    len = (d - dst);
    space_left = dstsize - len;
    if (space_left <= 0)
        return (dstsize + ft_strlen(src));
    s = src;
    while (*s && space_left-- > 1)
        *d++ = *s++;
    while (*s)
        s++;
    *d = 0;
    return (len + (size_t)(s - src));
}
