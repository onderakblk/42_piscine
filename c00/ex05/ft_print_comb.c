/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:40:44 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/02 01:55:06 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				ft_putchar(a);
				c++;
			}
			b++;
		}
		a++;
	}
}
