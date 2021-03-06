/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboldini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:30:30 by rboldini          #+#    #+#             */
/*   Updated: 2020/12/05 11:46:08 by rboldini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str)
	{
		if (*p_str >= 'A' && *p_str <= 'Z')
		{
			*p_str += 32;
		}
		p_str++;
	}
	return (str);
}
