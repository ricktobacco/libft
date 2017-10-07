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
    size_t	dst_size;
    size_t	src_size;
    size_t	i;

    src_size = 0;
    i = 0;
    while (dstsize-- && dst[i])
        i++;
    dstsize++;
    if (!dstsize)
        return (i + ft_strlen(src));
    dst_size = i;
    i = 0;
    while (src[src_size])
    {
        if (dstsize > 1)
        {
            dst[dst_size + i++] = src[src_size];
            dstsize--;
        }
        src_size++;
    }
    dst[dst_size + i] = '\0';
    return (dst_size + src_size);
}
