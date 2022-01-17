/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:45:39 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:57:16 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	while (nb != 0)
	{
		n *= nb --;
	}
	return (n);
}
/*
int main ()
{
		int res, exp;

res = ft_iterative_factorial(4), exp = 24;
printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(0), exp = 1;
printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(1), exp = 1;
printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(10), exp = 3628800;
printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(12), exp = 479001600;
printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(13), exp = 0;
printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(-2), exp = 0;
printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_iterative_factorial(1000), exp = 0;
printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);
}*/
