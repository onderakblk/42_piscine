/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 02:47:23 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/02 03:06:20 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	if (a != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	if (n == 2)
	{
		a = '0';
		while (a <= '8')
		{
			b = a + 1;
			while (b <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				ft_putchar(a);
				b++;
			}
			a++;
		}
	}
}
