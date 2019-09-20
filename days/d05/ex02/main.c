/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/15 21:11:21 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n", ft_atoi("1234560"));
	printf("%d\n", ft_atoi("-12345"));
	printf("%d\n", ft_atoi("+12345"));
	printf("%d\n", ft_atoi("001234"));
	printf("%d\n", ft_atoi("1234a567"));
	printf("%d\n", ft_atoi("abc"));
	printf("%d\n", ft_atoi("1203456"));
	printf("%d\n", ft_atoi("1234560"));
}
