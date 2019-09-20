/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:58:34 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 16:43:15 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (0);
	}
}
