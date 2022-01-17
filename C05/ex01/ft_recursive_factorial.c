/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:32:35 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:54:06 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (!nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main (void)
{
 int res, exp;

res = ft_recursive_factorial(4), exp = 24;
printf("4! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(0), exp = 1;
printf("0! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(1), exp = 1;
printf("1! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(10), exp = 3628800;
printf("10! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(12), exp = 479001600;
printf("12! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(13), exp = 1932053504;
printf("13! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(-2), exp = 0;
printf("-2! (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_recursive_factorial(1000), exp = 0;
printf("1000! (%d vs %d) -> %d\n", res, exp, res == exp);
}*/
