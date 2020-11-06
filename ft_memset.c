/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoshe <gmoshe@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 14:55:14 by gmoshe            #+#    #+#             */
/*   Updated: 2020/05/15 14:55:17 by gmoshe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memset(void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char*)str)[i] = c;
		i++;
	}
	return (str);
}
