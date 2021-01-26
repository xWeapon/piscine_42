/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:40:36 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/05 09:59:32 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_lowercase(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str < 'a' || *p_str > 'z')
			return (0);
		p_str++;
	}
	return (1);
}
