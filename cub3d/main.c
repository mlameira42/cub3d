/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:23:05 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/10 14:43:51 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_init_global(av[1]);
		if (glob()->doc_len >= 4
			&& !(ft_strncmp(glob()->doc + glob()->doc_len - 4, ".cub", 4)))
		{
			if (ft_main_ver())
				ft_exit(ft_fprintf(1, "Au rait\n") * 0);
			else
				ft_exit(1);
		}
		else
			ft_exit(1);
	}
	else
		ft_exit(1);
}
