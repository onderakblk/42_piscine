/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:17:46 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/15 02:35:25 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*pt;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	pt = (char *)malloc(len * sizeof(char));
	if (pt != NULL)
	{
		while (src[i])
		{
			pt[i] = src[i];
			i++;
		}
		pt[i] = '\0';
	}
	else
		return (NULL);
	return (pt);
}
