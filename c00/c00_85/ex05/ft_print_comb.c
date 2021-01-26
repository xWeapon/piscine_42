/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:34:25 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/01 08:42:19 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_trp(char x, char y, char z)
{
	char sp;
	char cm;

	sp = ' ';
	cm = ',';
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, &cm, 1);
		write(1, &sp, 1);
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	y = '0';
	z = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				print_trp(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
