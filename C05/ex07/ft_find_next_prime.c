/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acurri <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:35:31 by acurri            #+#    #+#             */
/*   Updated: 2021/09/20 17:19:07 by acurri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	//if (nb > 2147483629)
	//	return (2147483647);
	while (nb < 2)
	{
		nb ++;
	}
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
		{
			nb++;
			n = 2;
		}
		else
			n++;
	}
	return (nb);
}
int main(void)
{
	printf("%d -> %d\n", -3096, ft_find_next_prime(-3096));
        printf("%d -> %d\n", 0, ft_find_next_prime(0));
        printf("%d -> %d\n", 1, ft_find_next_prime(1));
        printf("%d -> %d\n", 2, ft_find_next_prime(2));
        printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
        printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
        printf("%d -> %d\n", 288772, ft_find_next_prime(288772));
        printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
        printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
        printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
        printf("%d -> %d\n", 177672, ft_find_next_prime(177672));
        printf("%d -> %d\n", 159757, ft_find_next_prime(159757));
        printf("%d -> %d\n", 96791, ft_find_next_prime(96791));
        printf("%d -> %d\n", 350748, ft_find_next_prime(350748));
        printf("%d -> %d\n", 160801, ft_find_next_prime(160801));
        printf("%d -> %d\n", 219170, ft_find_next_prime(219170));
        printf("%d -> %d\n", 419886, ft_find_next_prime(419886));
        printf("%d -> %d\n", 283696, ft_find_next_prime(283696));
        printf("%d -> %d\n", 83006, ft_find_next_prime(83006));
        printf("%d -> %d\n", 292418, ft_find_next_prime(292418));
        printf("%d -> %d\n", 258630, ft_find_next_prime(258630));
        printf("%d -> %d\n", 233551, ft_find_next_prime(233551));
        printf("%d -> %d\n", 399440, ft_find_next_prime(399440));
        printf("%d -> %d\n", 244823, ft_find_next_prime(244823));
        printf("%d -> %d\n", 415834, ft_find_next_prime(415834));
        printf("%d -> %d\n", 90206, ft_find_next_prime(90206));
        printf("%d -> %d\n", 215141, ft_find_next_prime(215141));
        printf("%d -> %d\n", 305772, ft_find_next_prime(305772));
        printf("%d -> %d\n", 412271, ft_find_next_prime(412271));
        printf("%d -> %d\n", 33906, ft_find_next_prime(33906));
        printf("%d -> %d\n", 126580, ft_find_next_prime(126580));
        printf("%d -> %d\n", 113269, ft_find_next_prime(113269));
        printf("%d -> %d\n", 62590, ft_find_next_prime(62590));
        printf("%d -> %d\n", 336512, ft_find_next_prime(336512));
        printf("%d -> %d\n", 404588, ft_find_next_prime(404588));
        printf("%d -> %d\n", 202890, ft_find_next_prime(202890));
        printf("%d -> %d\n", 171148, ft_find_next_prime(171148));
        printf("%d -> %d\n", 319118, ft_find_next_prime(319118));
        printf("%d -> %d\n", 295059, ft_find_next_prime(295059));
        printf("%d -> %d\n", 347288, ft_find_next_prime(347288));
        printf("%d -> %d\n", 121509, ft_find_next_prime(121509));
        printf("%d -> %d\n", 89254, ft_find_next_prime(89254));
        printf("%d -> %d\n", 79730, ft_find_next_prime(79730));
        printf("%d -> %d\n", 342206, ft_find_next_prime(342206));
        printf("%d -> %d\n", 22212, ft_find_next_prime(22212));
        printf("%d -> %d\n", 84166, ft_find_next_prime(84166));
        printf("%d -> %d\n", 388810, ft_find_next_prime(388810));
        printf("%d -> %d\n", 5837, ft_find_next_prime(5837));
        printf("%d -> %d\n", 200398, ft_find_next_prime(20038));
        printf("%d -> %d\n", 296660, ft_find_next_prime(296660));
        printf("%d -> %d\n", 85205, ft_find_next_prime(85205));
        printf("%d -> %d\n", 385751, ft_find_next_prime(385751));
        printf("%d -> %d\n", 126170, ft_find_next_prime(126170));
        printf("%d -> %d\n", 420060, ft_find_next_prime(420060));
        printf("%d -> %d\n", 254685, ft_find_next_prime(254685));
        printf("%d -> %d\n", 51939, ft_find_next_prime(51939));
        printf("%d -> %d\n", 260330, ft_find_next_prime(260330));
        printf("%d -> %d\n", 298737, ft_find_next_prime(298737));
        printf("%d -> %d\n", 4850, ft_find_next_prime(4850));
        printf("%d -> %d\n", 395508, ft_find_next_prime(395508));
        printf("%d -> %d\n", 356085, ft_find_next_prime(356085));
        printf("%d -> %d\n", 50938, ft_find_next_prime(50938));
        printf("%d -> %d\n", 81660, ft_find_next_prime(81660));
        printf("%d -> %d\n", 305918, ft_find_next_prime(305918));
        printf("%d -> %d\n", 163584, ft_find_next_prime(163584));
        printf("%d -> %d\n", 147208, ft_find_next_prime(147208));
        printf("%d -> %d\n", 343818, ft_find_next_prime(343818));
        printf("%d -> %d\n", 340236, ft_find_next_prime(340236));
        printf("%d -> %d\n", 153358, ft_find_next_prime(153358));
        printf("%d -> %d\n", 383166, ft_find_next_prime(383166));
        printf("%d -> %d\n", 170257, ft_find_next_prime(170257));
        printf("%d -> %d\n", 185646, ft_find_next_prime(185646));
        printf("%d -> %d\n", 293661, ft_find_next_prime(293661));
        printf("%d -> %d\n", 142626, ft_find_next_prime(142626));
        printf("%d -> %d\n", 103214, ft_find_next_prime(103214));
        printf("%d -> %d\n", 322865, ft_find_next_prime(322865));
        printf("%d -> %d\n", 365366, ft_find_next_prime(365366));
        printf("%d -> %d\n", 62775, ft_find_next_prime(62775));
        printf("%d -> %d\n", 145208, ft_find_next_prime(145208));
        printf("%d -> %d\n", 247612, ft_find_next_prime(247612));
        printf("%d -> %d\n", 45886, ft_find_next_prime(45886));
        printf("%d -> %d\n", 361774, ft_find_next_prime(361774));
        printf("%d -> %d\n", 41799, ft_find_next_prime(41799));
        printf("%d -> %d\n", 145548, ft_find_next_prime(145548));
        printf("%d -> %d\n", 130896, ft_find_next_prime(130896));
        printf("%d -> %d\n", 378705, ft_find_next_prime(378705));
        printf("%d -> %d\n", 18781, ft_find_next_prime(18781));
        printf("%d -> %d\n", 33630, ft_find_next_prime(33630));
        printf("%d -> %d\n", 128354, ft_find_next_prime(128354));
        printf("%d -> %d\n", 47465, ft_find_next_prime(47465));
        printf("%d -> %d\n", 344774, ft_find_next_prime(344774));
        printf("%d -> %d\n", 14194, ft_find_next_prime(14194));
        printf("%d -> %d\n", 47256, ft_find_next_prime(47256));
        printf("%d -> %d\n", 97171, ft_find_next_prime(97171));
        printf("%d -> %d\n", 27548, ft_find_next_prime(27548));
        printf("%d -> %d\n", 327581, ft_find_next_prime(327581));
        printf("%d -> %d\n", 341418, ft_find_next_prime(341418));
        printf("%d -> %d\n", 234416, ft_find_next_prime(234416));
        printf("%d -> %d\n", 79795, ft_find_next_prime(79795));
        printf("%d -> %d\n", 305082, ft_find_next_prime(305082));
        printf("%d -> %d\n", 53693, ft_find_next_prime(53693));
        printf("%d -> %d\n", 230336, ft_find_next_prime(230336));
        printf("%d -> %d\n", 176588, ft_find_next_prime(176588));
        printf("%d -> %d\n", 421338, ft_find_next_prime(421338));
        printf("%d -> %d\n", 6112, ft_find_next_prime(6112));
        printf("%d -> %d\n", 93665, ft_find_next_prime(93665));
        printf("%d -> %d\n", 249169, ft_find_next_prime(249169));
        printf("%d -> %d\n", 289771, ft_find_next_prime(289771));
        printf("%d -> %d\n", 174073, ft_find_next_prime(174073));
}