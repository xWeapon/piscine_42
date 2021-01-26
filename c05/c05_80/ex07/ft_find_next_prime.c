/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:13:14 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/10 10:13:24 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int x;
	int i;
	int prime;

	prime = 0;
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	x = 2;
	i = 0;
	while (x <= nb)
	{
		if (nb % x == 0)
			i++;
		if (i == 2)
			break ;
		x++;
	}
	if (i == 1)
		prime = 1;
	return (prime);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
	{
		nb++;
		nb = ft_find_next_prime(nb);
	}
	return (nb);
}
