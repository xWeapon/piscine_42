/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:36:20 by rboldini          #+#    #+#             */
/*   Updated: 2020/11/29 19:36:25 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_fr(int x)
{
	int ix;

	ix = 0;
	write(1, "/", 1);
	if (x != 1)
	{
		x -= 2;
		while (ix < x - 1)
		{
			write(1, "*", 1);
			ix++;
		}
		write(1, "\\\n", 2);
	}
	else
	{
		write(1, "\n", 1);
	}
}

void	print_ls(int x)
{
	int ix;

	ix = 0;
	write(1, "\\", 1);
	if (x != 1)
	{
		x -= 2;
		while (ix < x - 1)
		{
			write(1, "*", 1);
			ix++;
		}
		write(1, "/\n", 2);
	}
	else
	{
		write(1, "\n", 1);
	}
}

void	print_body(int y, int x)
{
	int ix;
	int iy;

	iy = 0;
	while (iy < y - 1)
	{
		ix = 0;
		write(1, "*", 1);
		while (ix < x - 1)
		{
			write(1, " ", 1);
			ix++;
		}
		write(1, "*\n", 2);
		iy++;
	}
}

void	body(int y, int x)
{
	int iy;

	iy = 0;
	if (x != 1)
	{
		x -= 2;
		y -= 2;
		print_body(y, x);
	}
	else
	{
		while (iy < y - 1)
		{
			write(1, "B\n", 2);
			iy++;
		}
	}
}

void	rush(int x, int y)
{
	if (!(y <= 0 || x <= 0))
	{
		if (y != 1)
		{
			print_fr(x);
			body(y, x);
			print_ls(x);
		}
		else
		{
			print_fr(x);
		}
	}
}
