/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:46:43 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 13:41:17 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int product;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	product = nb;
	while (power > 1)
	{
		product = product * nb;
		power--;
	}
	return (product);
}
