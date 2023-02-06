/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipalaci <vipalaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:23:01 by vipalaci          #+#    #+#             */
/*   Updated: 2023/01/19 10:34:51 by vipalaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*cast_b;

	cast_b = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		cast_b[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (cast_b);
}
