/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:55:18 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:54:38 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			power --;
			return (i * ft_recursive_power(nb, power));
		}
	}
	return (nb);
}
/*
int main (void)
{
    int res, exp;

res = ft_recursive_power(2, 2), exp = 4;
printf("2^2 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(2, 1), exp = 2;
printf("2^1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(2, 0), exp = 1;
printf("2^0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(2, -1), exp = 0;
printf("2^-1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(-2, 4), exp = 16;
printf("2^4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(-5, 3), exp = -125;
printf("5^3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_power(3, 5), exp = 243;
printf("3^5 (%d vs %d) -> %d\n", res, exp, res == exp);
}*/
