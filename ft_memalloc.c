/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:43:50 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/21 17:45:41 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	if ((int)size < 0 || !size)
		return (0);
	alloc = malloc(size);
	if (alloc)
		ft_memset(alloc, 0, size);
	return (alloc ? alloc : 0);
}
