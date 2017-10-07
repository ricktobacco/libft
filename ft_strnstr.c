/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:11:08 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 20:11:11 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	im;

	if (!*needle)
		return (char *)(haystack);
	i = -1;
	im = 0;
	while (haystack[i++ + 1] && (int)len > 0)
	{
		if (haystack[i] == needle[im])
			im++;
		else if (im > 0)
			im--;
		if (!needle[im])
			return (char *)(&haystack[i - im + 1]);
		len--;
	}
	return (0);
}
