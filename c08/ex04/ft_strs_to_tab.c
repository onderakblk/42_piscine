/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 01:29:14 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/19 14:29:46 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * (i + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].size = ft_strlen(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
