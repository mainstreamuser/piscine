/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:04:34 by acurri            #+#    #+#             */
/*   Updated: 2021/09/21 12:05:16 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int k;
	int n;
	n = ft_strlen(str);

	char	ptr[n];

	k = 0;
	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			if (to_find[j + 1] == 0)
				while (str[i] != 0)
				{	ptr[k] = str[i];
					i++;
					k++;
				}
				if (str[i] == '\0')
					return (ptr);
			j++;
			i++;
		}
		i++;
	}
	return (0);
}

int main(void)
{

printf("%s\n", ft_strstr("asdf qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
printf("%s\n", ft_strstr("", "wer"));
printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
printf("%s\n", ft_strstr("asdf qwerty", ""));
printf("--------------------\n");
printf("%s\n", strstr("asdf qwerty", "wer"));
printf("%s\n", strstr("asdf qwerty qwerty", "wer"));
printf("%s\n", strstr("asdf qwerty", "qwerty1"));
printf("%s\n", strstr("", "wer"));
printf("%s\n", strstr("asdf qwerty", "zxcv"));
printf("%s\n", strstr("asdf qwerty", ""));
}
