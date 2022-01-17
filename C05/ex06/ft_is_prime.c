/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:23:42 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:56:15 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
	{
		if (n % 2 == 0)
		{
			n++;
		}
		else if (n % 3 == 0)
		{	
			n++;
		}
		else if (n % 5 == 0)
		{
			n++;
		}
		else if (nb % n == 0)
			return (0);
		else
			n++;
	}
	return (1);
}

int main ()
{
	int res, exp;

res = ft_is_prime(4), exp = 0;
printf("prime 4? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(2), exp = 1;
printf("prime 2? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(1), exp = 0;
printf("prime 1? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(0), exp = 0;
printf("prime 0? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(7), exp = 1;
printf("prime 7? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(23), exp = 1;
printf("prime 23? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(-5), exp = 0;
printf("prime -5? (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_is_prime(61), exp = 1;
printf("prime 61? (%d vs %d) -> %d\n", res, exp, res == exp);
}
