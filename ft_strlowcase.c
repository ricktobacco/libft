/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:11:48 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/04/10 20:11:50 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		*str = ft_tolower((int)*str);
		str++;
	}
	return (str);
}
