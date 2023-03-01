/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:26:35 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/16 15:54:20 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*ptr;

	i = 0;
	x = 0;
	ptr = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			ptr[x++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			ptr[x++] = sep[j++];
		}
		i++;
	}
	ptr[x] = '\0';
	return (ptr);
}
