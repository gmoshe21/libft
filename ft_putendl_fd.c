/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoshe <gmoshe@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:09:19 by gmoshe            #+#    #+#             */
/*   Updated: 2020/05/15 16:09:22 by gmoshe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl_fd(char *s, int fd)
{
	char	i;

	i = '\n';
	if (s != NULL)
	{
		while (*s)
		{
			write(fd, s++, 1);
		}
		write(fd, &i, 1);
	}
}
