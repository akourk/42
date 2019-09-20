/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:34:10 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/11 20:10:22 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '/';
	while (++x <= '7')
	{
		y = x;
		while (++y <= '8')
		{
			z = y;
			while (++z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				if (x != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
