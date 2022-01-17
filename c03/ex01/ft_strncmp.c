/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:23:26 by acurri            #+#    #+#             */
/*   Updated: 2021/09/21 11:55:21 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2 && n != 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
}
/*
int main(void)
{
    char s1[] = "asde";
    char s2[] = "asdf";
    int n = 3;
    printf("%d\n",ft_strncmp(s1, s2, n));
	printf("%d",strncmp(s1, s2, n));
}*/
