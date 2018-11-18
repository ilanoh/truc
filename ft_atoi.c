/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:05:45 by iohayon           #+#    #+#             */
/*   Updated: 2018/11/18 19:19:16 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long long int number;
	int negative_count;
	int i;
	long long int	int_max;
	long long  int	int_min;
		
	int_max = 2147483647;
	int_min = -2147483648;
	i = 0;
	negative_count = 0;
	number = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			negative_count = 1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		number = number * 10 + str[i] - 48;
		if (number > int_max && negative_count == 0)
			return (-1);
		i++;
	}
	if (number == int_min && negative_count == 1)
		return (-number);
	if (number < int_min && negative_count == 1)
		return (0);
	if (negative_count == 0)
		return (number);
	else
		return (-number);
}
