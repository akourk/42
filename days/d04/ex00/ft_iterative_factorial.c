/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:00:27 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/13 21:05:42 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int sum;

	if (nb > 0 && nb < 13)
	{
		sum = nb;
		nb--;
		while (nb > 1)
		{
			sum = sum * nb;
			nb--;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}
