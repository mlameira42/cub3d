/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_ver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 13:12:29 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/20 16:04:36 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

bool	ft_main_ver(void)
{
	glob()->fd = open(glob()->doc, O_RDONLY);
	if (glob()->fd == -1)
		return (false);
	if (!ft_get_info())
		return (false);
	if (!ft_ver_info())
		return (false);
	glob()->fd = open(glob()->doc, O_RDONLY);
	if (glob()->fd == -1)
		return (false);
	ft_get_map_size();
	glob()->fd = open(glob()->doc, O_RDONLY);
	if (glob()->fd == -1)
		return (false);
	if (!ft_copy_map() /* || !ft_ver_walls() */)
		return (false);
	ft_debugger();
	return (true);
}
