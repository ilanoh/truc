/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 10:58:28 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/17 19:05:23 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t len)
{
	size_t	i;
	size_t	src_len;

	src_len = (size_t)ft_strlen(src);
	i = 0;
	if (src_len < len)
	{
		while (i < src_len)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
