/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:21:42 by mhenin            #+#    #+#             */
/*   Updated: 2024/07/25 10:36:10 by mhenin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	b;

	b = argc - 1;
	while (b > 0)
	{
		i = 0;
		while (argv[b][i])
		{
			write(1, &argv[b][i], 1);
			i++;
		}
		write(1, "\n", 1);
		b--;
	}
	return (0);
}
