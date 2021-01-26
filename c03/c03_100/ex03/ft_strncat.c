/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:20:41 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/07 14:28:09 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*p_dest;
	unsigned int	i;

	i = 0;
	p_dest = dest;
	while (*p_dest)
		p_dest++;
	while (i < nb && *src)
	{
		*p_dest = *src;
		p_dest++;
		src++;
		i++;
	}
	*p_dest = '\0';
	return (dest);
}
