/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:48:44 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/07 13:04:10 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str != '\0')
	{
		if (*p_str < 'A')
			return (0);
		if ((*p_str > 'Z' && *p_str < 'a') || *p_str > 'z')
			return (0);
		p_str++;
	}
	return (1);
}
