/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:00:20 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/18 18:36:35 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char c;

	if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
	if (nb > 9 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + 48;
		ft_putchar(c);
	}
	if (nb < 0 && nb > -2147483648)
	{
		nb = -nb;
		ft_putchar(45);
		ft_putnbr(nb);
	}
	if (nb == -2147483648)
	{
		ft_putchar(45);
		ft_putchar(50);
		ft_putnbr(147483648);
	}
}
