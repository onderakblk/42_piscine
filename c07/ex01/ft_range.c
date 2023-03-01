/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:51:25 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/15 03:36:17 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	*ptr;
	int	y;

	i = min;
	n = max - min;
	y = 0;
	ptr = (int *) malloc(n * sizeof(int));
	if (min >= max || ptr == NULL)
		return (NULL);
	else
	{
		while (i < max)
		{
			ptr[y] = i;
			i++;
			y++;
		}
		ptr[y] = '\0';
	}
	return (ptr);
}
