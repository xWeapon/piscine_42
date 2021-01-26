/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:00:28 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/07 17:11:00 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str < 'A' || *p_str > 'Z')
			return (0);
		p_str++;
	}
	return (1);
}