/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:23:34 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/23 15:42:03 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <math.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# include <limits.h>
# include <stdarg.h>
# include "minilibx-linux/mlx.h"
# include "libft/libft.h"

typedef struct s_global
{
	char		**map;
	char		*doc;
	int			doc_len;
	int			fd;
	int			rows;
	size_t		max_cols;
	int			nsew_count;
	int			ver_wall[2];
	char		*n_wall_tex;
	char		*s_wall_tex;
	char		*e_wall_tex;
	char		*w_wall_tex;
	int			*floor_color;
	int			*ceil_color;
	int			empty_lines;
	bool		isfloorinfo;
	bool		isceilinfo;
}				t_global;

t_global	*glob(void);
void		ft_init_global(char *str);
void		ft_exit(int status);
bool		ft_main_ver(void);
void		ft_get_info(void);
bool		ft_ver_line(char *line);
bool		ft_copy_map(void);
void		ft_free_strs(char **strs);
int			*ft_copy_ints(char *str, char c);
void		ft_copy_info(char *str, char c);
bool		ft_ver_info(void);
void		ft_close(void);
void		ft_get_map_size(void);
void		ft_debugger(void);

#endif