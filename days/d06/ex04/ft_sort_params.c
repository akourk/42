/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:42:28 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/17 23:33:35 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(char *argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
		ft_putchar(argv[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int argc, char *argv[], int *order)
{
	int i;
	int j;
	int flag;
	int temp;

	i = 0;
	while (++i < argc - 2)
	{
		flag = 0;
		if (ft_strcmp(argv[order[i]], argv[order[i + 1]]) > 0)
			ft_swap(&order[i], &order[i + 1]);
		j = 0;
		while (++j < argc - 1)
			if (ft_strcmp(argv[order[j]], argv[order[j + 1]]) > 0)
				flag = 1;
		if (flag)
			i = 0;
		else
			i = 2147483645;
	}
	i = 0;
	while (i++ < argc - 1)
		ft_print_params(argv[order[i]]);
}

int		main(int argc, char *argv[])
{
	int order[argc + 1];
	int i;

	i = 0;
	while (i++ < argc)
		order[i] = i;
	ft_sort_params(argc, argv, order);
	return (0);
}
