/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:12:59 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/11 11:38:06 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int x;
	int y;

	x = 0;
	y = 6;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	if (nb == 16)
		return (4);
	if (nb == 25)
		return (5);
	while (y <= (nb / 6))
	{
		x = nb / y;
		if (x == y && (nb % y == 0))
			return (x);
		y++;
	}
	return (0);
}
