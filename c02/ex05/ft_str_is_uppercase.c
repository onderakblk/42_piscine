/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:19:36 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/02 16:29:09 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	if (str[c] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
