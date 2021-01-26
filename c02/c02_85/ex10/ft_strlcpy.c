/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:30:01 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/09 14:32:22 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int dsize)
{
	int				i;
	unsigned int	n;

	n = dsize;
	i = 0;
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dest++ = src[i++]) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (dsize != 0)
			*dest = '\0';
		while (src[i++])
			;
	}
	return (i - 1);
}
