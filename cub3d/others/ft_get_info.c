/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:26:00 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/20 15:40:59 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

bool	ft_get_info(void)
{
	char	*line;

	line = ft_get_next_line(glob()->fd);
	while (line)
	{
		if (!ft_linelen(line))
			glob()->empty_lines++;
		else if (!ft_strncmp(line, "NO ", 3))
			ft_copy_info(line, 'N');
		else if (!ft_strncmp(line, "SO ", 3))
			ft_copy_info(line, 'S');
		else if (!ft_strncmp(line, "WE ", 3))
			ft_copy_info(line, 'W');
		else if (!ft_strncmp(line, "EA ", 3))
			ft_copy_info(line, 'E');
		else if (!ft_strncmp(line, "F ", 2))
			ft_copy_info(line, 'F');
		else if (!ft_strncmp(line, "C ", 2))
			ft_copy_info(line, 'C');
		free(line);
		line = ft_get_next_line(glob()->fd);
	}
	return (glob()->n_wall_tex && glob()->s_wall_tex
		&& glob()->w_wall_tex && glob()->e_wall_tex
		&& *glob()->floor_color && *glob()->ceil_color);
}
