/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtiutiun <rtiutiun@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 20:10:58 by rtiutiun          #+#    #+#             */
/*   Updated: 2017/09/25 17:24:35 by rtiutiun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *str, int c)
{
	int wc;
	int skip;

	wc = 0;
	skip = 1;
	while (*str)
	{
		if (*str == c)
			skip = 1;
		else if (skip)
		{
			wc++;
			skip = 0;
		}
		str++;
	}
	return (wc);
}

static char		*next_word(char *str, int c)
{
	while (*str == c)
		str++;
	return (str);
}

static int		len_word(char *str, int c)
{
	int len;

	len = 0;
	while ((str[len]) && (str[len] != c))
		len++;
	return (len);
}

static char		*set_word(char **result, char *str, int i, int c)
{
	int len;
	int j;

	j = 0;
	str = next_word(str, c);
	len = len_word(str, c);
	result[i] = (char*)malloc(sizeof(char) * len + 1);
	if (!result[i])
		return (0);
	while (j < len)
	{
		result[i][j] = str[j];
		j++;
	}
	result[i][j] = '\0';
	return (str + len);
}

char			**ft_strsplit(char const *s, int c)
{
	char	**result;
	char	*str;
	int		wc;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)s;
	wc = count_words(str, c);
	result = (char**)malloc(sizeof(char*) * (wc + 1));
	if (!result)
		return (NULL);
	while (i < wc)
	{
		str = set_word(result, str, i, c);
		i++;
	}
	result[i] = 0;
	return (result);
}
