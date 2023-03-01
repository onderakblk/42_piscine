/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:41:06 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/06 17:05:34 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}
