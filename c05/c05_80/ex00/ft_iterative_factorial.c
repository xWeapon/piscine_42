/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:43:20 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/10 08:59:45 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fatt;

	fatt = nb;
	if (nb == 0)
		fatt = 1;
	while (nb != 0 && --nb != 0)
	{
		fatt *= nb;
	}
	return (fatt);
}
