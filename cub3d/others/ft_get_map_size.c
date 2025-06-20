/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:49:26 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/20 15:53:35 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_get_map_size(void)
{
	int		i;
	char	*line;

	i = 0;
	line = ft_get_next_line(glob()->fd);
	while (line && i != glob()->empty_lines)
	{
		if (!ft_linelen(line))
			i++;
		free(line);
		line = ft_get_next_line(glob()->fd);
	}
	while (line)
	{
		glob()->rows++;
		free(line);
		line = ft_get_next_line(glob()->fd);
	}
}
