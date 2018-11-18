/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:09:55 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/18 17:59:35 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
		size_t	i;
		int		t;
		size_t	j;
		int		needle_len;

		i = 0;
		t = 0;
		needle_len = ft_strlen((char*)needle);
		if (needle[i] == '\0')
			return ((char*)haystack);
		while (haystack[i] && needle[t] && i < len)
		{
			t = 0;
			j = i;
			while (haystack[j] && needle[t] && haystack[j] == needle[t] && j < len)
			{
				t++;
				j++;
			}
			if (t == needle_len)
				return ((char*)haystack + i);
			else
				i++;
		}
		return (0);
}
