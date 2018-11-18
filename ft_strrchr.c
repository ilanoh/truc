/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:01:25 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/18 17:07:33 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)s;
	c = (char)c;
	while (s2[i])
		i++;
	if (c == '\0')
	{
		while (*s2)
			s2++;
		return (s2);
	}
	while (i > 0)
	{
		if (c == s2[i])
			return (s2 + i);
		i--;
	}
	return (NULL);
}
