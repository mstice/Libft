/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:58:06 by mtice             #+#    #+#             */
/*   Updated: 2024/12/05 16:05:26 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	c = (unsigned char)c;
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("Result: %d", ft_isdigit(-10));
	return (0);
}*/
