/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adstuder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 22:15:45 by adstuder          #+#    #+#             */
/*   Updated: 2018/04/12 22:56:14 by adstuder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i <= (argc - 1))
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;

	if (argc <= 1)
		return (0);
	i = 2;
	while (i <= argc - 1)
	{
		if (ft_strcmp(argv[i - 1], argv[i]) > 0)
		{
			tmp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = tmp;
			i = 1;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
