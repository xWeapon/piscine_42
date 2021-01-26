/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:31:19 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/09 14:31:32 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	to_hex(char c)
{
	char			hex_u;
	char			hex_d;
	unsigned int	neg;

	if (c < 0)
	{
		neg = 256 + c;
		hex_u = neg % 16;
		hex_d = neg / 16;
	}
	else
	{
		hex_u = c % 16;
		hex_d = c / 16;
	}
	ft_putchar('\\');
	if (hex_d < 10)
		ft_putchar(hex_d + 48);
	else
		ft_putchar(hex_d + 87);
	if (hex_u < 10)
		ft_putchar(hex_u + 48);
	else
		ft_putchar(hex_u + 87);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
