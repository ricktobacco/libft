/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:10:58 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/25 03:43:10 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*make(int len, int base, long num)
{
	char		*bs;
	char		*str;

	bs = "0123456789ABCDEF";
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num)
	{
		str[--len] = bs[num % base];
		num /= base;
	}
	return (str);
}

char			*ft_itoa_base(int value, int base)
{
	long		num;
	long		tmp;
	int			len;
	char		*str;

	len = 0;
	tmp = value;
	num = value;
	if (value < 0)
	{
		if (base == 10)
			len++;
		num *= -1;
	}
	if (!value)
		return (ft_strdup("0"));
	while (value)
	{
		value /= base;
		len++;
	}
	str = make(len, base, num);
	if (str && tmp < 0 && base == 10)
		str[0] = '-';
	return (str);
}
