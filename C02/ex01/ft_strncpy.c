/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:33:02 by acurri            #+#    #+#             */
/*   Updated: 2021/09/13 23:48:34 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
		char test1[256] = "asdf";
printf("%s\n", ft_strncpy(test1, "uiop", 5));
printf("%s\n", ft_strncpy(test1, "qwerty", 4));
printf("%s\n", ft_strncpy(test1, "z", 1));
printf("------------\n");
printf("%s\n", strncpy(test1, "uiop", 5));
printf("%s\n", strncpy(test1, "qwerty", 4));
printf("%s\n", strncpy(test1, "z", 1));
}*/