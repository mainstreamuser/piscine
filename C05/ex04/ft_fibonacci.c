/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:52:32 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 16:57:57 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}
/*
   int main(void)
{
   printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	ft_fibonacci(-1477),
	ft_fibonacci(0),
	ft_fibonacci(1),
	ft_fibonacci(2),
	ft_fibonacci(3),

	ft_fibonacci(4),
	ft_fibonacci(5),
	ft_fibonacci(6),
	ft_fibonacci(7),

	ft_fibonacci(8),
	ft_fibonacci(9),
	ft_fibonacci(10),
	ft_fibonacci(11));
}*/
