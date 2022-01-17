/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 19:01:07 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:59:48 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i < (unsigned int) nb)
	{
		i++;
	}
	if (i * i == (unsigned int) nb)
		return (i);
	else
		return (0);
}
/*
int main ()
{
int res, exp;
printf("%d\n", ft_sqrt(2147483647));
res = ft_sqrt(1), exp = 1;
printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(4), exp = 2;
printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(0), exp = 0;
printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(3), exp = 0;
printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(7), exp = 0;
printf("root 7 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(16), exp = 4;
printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-5), exp = 0;
printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(144), exp = 12;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(-125), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1640045925), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2147395600), exp = 46340;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2147483646), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(917362944), exp = 30288;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1926881480), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(464919844), exp = 21562;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(274208610), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(115820644), exp = 10762;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(641135909), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(359595369), exp = 18963;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(2130351245), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(1813567396), exp = 42586;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
res = ft_sqrt(959162111), exp = 0;
printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp);
}*/
