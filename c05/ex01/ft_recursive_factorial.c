/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oakbulak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:12:53 by oakbulak          #+#    #+#             */
/*   Updated: 2023/02/11 18:49:24 by oakbulak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 1)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
		return (0);
}
