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
    size_t	sleft;

    sleft = (int)dstsize;
    while (*dst && sleft > 0 && sleft--)
        dst++;
    while (*src && sleft > 1 && sleft--)
        *dst++ = *src++;
    if (sleft == 1)
        *dst = '\0';
    return (dstsize - sleft);
}
