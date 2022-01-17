/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:50:19 by acurri            #+#    #+#             */
/*   Updated: 2021/09/16 22:21:21 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ' )
			i++;
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		else if (!(str[i] >= '0' && str[i] <= ))
			return (sign * res);
		i++;
	}
	return (sign * res);
}

int main()
{
	char *str = "---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return 0;
}
