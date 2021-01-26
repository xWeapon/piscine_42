/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:02:25 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/05 11:20:40 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str <= 31 || *p_str == 127)
			return (0);
		p_str++;
	}
	return (1);
}
