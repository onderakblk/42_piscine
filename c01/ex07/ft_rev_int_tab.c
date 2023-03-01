/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 21:04:24 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/06 12:01:45 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	rev;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		rev = tab[a];
		tab[a] = tab[b];
		tab[b] = rev;
		a++;
		b--;
	}
}
