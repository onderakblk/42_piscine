/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 04:20:29 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/15 05:16:43 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	x;

	i = 0;
	x = max - min;
	if (min >= max)
	{
		ptr = NULL;
		return (0);
	}
	ptr = (int *)malloc(x * sizeof(int));
	if (ptr == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	ptr[i] = '\0';
	*range = ptr;
	return (x);
}
