/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 23:49:04 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/10/08 18:08:44 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, char *restrict s2, size_t n)
{
	int		j;
	size_t	i;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] && j < (int)n)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
