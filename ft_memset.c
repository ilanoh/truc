/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 10:47:20 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/17 15:21:35 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	unsigned char	*tab;
	size_t			i;

	a = (unsigned char)c;
	tab = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		tab[i] = a;
		i++;
	}
	return (b);
}
