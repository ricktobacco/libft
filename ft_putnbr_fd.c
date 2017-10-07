/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:05:19 by rtiutiun          #+#    #+#             */
/*   Updated: 2016/09/20 15:37:37 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		put(int n, int fd)
{
	if (n >= 10 || n <= -10)
	{
		put(n / 10, fd);
		put(n % 10, fd);
	}
	else
		ft_putchar_fd((n < 0 ? -n : n) + '0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	put(n, fd);
}
