/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_ints.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilva-n <nsilva-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:07:42 by nsilva-n          #+#    #+#             */
/*   Updated: 2025/06/20 15:31:18 by nsilva-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	*ft_copy_ints(char *str, char c)
{
	char	**temp;
	int		i;
	int		*res;

	temp = ft_split(str + 1, ',');
	res = malloc(sizeof(int) * 3);
	if (!temp || !res)
	{
		if (res)
			return (free(res), NULL);
		if (temp)
			return (ft_free_strs(temp), NULL);
	}
	i = -1;
	while (temp[++i])
	{
		if (i > 2 || !ft_strlen(temp[i]))
			return (ft_free_strs(temp), free(res), NULL);
		res[i] = ft_atoi(temp[i]);
	}
	if (c == 'C')
		return (ft_free_strs(temp), res);
	return (ft_free_strs(temp), res);
}
