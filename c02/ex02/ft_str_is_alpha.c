/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:04:21 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/04 06:01:30 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A' && str [n] <= 'Z')
			|| (str [n] >= 'a' && str [n] <= 'z'))
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}