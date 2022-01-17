/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:59:30 by acurri            #+#    #+#             */
/*   Updated: 2021/09/21 12:03:44 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j] != 0)
	{
		j++;
	}
	while (i < nb && src[i] != 0)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = 0;
	return (dest);
}
/*
int main(void)
{
	char dest[256] = "destionation";
	char src[] = " source";

	printf("%s\n", ft_strncat( dest, src, 3));
	printf("%s\n", strncat( dest, src, 3));
}
*/