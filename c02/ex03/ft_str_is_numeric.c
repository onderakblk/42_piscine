/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:33:15 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/02 16:09:02 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] >= 48 && str [n] <= 57)
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
