/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:01:58 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/15 22:28:34 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("%s\n", ft_strstr("1234560", "345"));
	printf("%s\n", ft_strstr("-12345", "45"));
	printf("%s\n", ft_strstr("+12345", "as"));
	printf("%s\n", ft_strstr("this is string", "string"));
	printf("%s\n", ft_strstr("hello", "hello"));
	printf("%s\n", ft_strstr("", ""));
}
