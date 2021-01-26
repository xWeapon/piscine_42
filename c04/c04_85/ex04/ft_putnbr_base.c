/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:21 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/10 17:24:33 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_lenbase(char *base)
{
	int len;
	int j;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-')
			return (1);
		j = 0;
		while (j < len)
		{
			if (base[j] == base[len])
				return (1);
			j++;
		}
		len++;
	}
	if (len == 0 || len == 1)
		return (1);
	return (len);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int nbr_uns;
	unsigned int len;

	len = ft_lenbase(base);
	if (len == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr_uns = (unsigned int)(-1 * nbr);
	}
	else
	{
		nbr_uns = (unsigned int)nbr;
	}
	if (nbr_uns >= len)
	{
		ft_putnbr_base(nbr_uns / len, base);
		ft_putnbr_base(nbr_uns % len, base);
	}
	else
	{
		write(1, &base[nbr_uns], 1);
	}
}
