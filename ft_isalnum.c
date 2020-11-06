/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoshe <gmoshe@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:19:09 by gmoshe            #+#    #+#             */
/*   Updated: 2020/05/15 15:19:12 by gmoshe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
			|| (i >= '0' && i <= '9'))
		return (8);
	return (0);
}
