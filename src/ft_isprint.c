/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtice <mtice@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:54:16 by mtice             #+#    #+#             */
/*   Updated: 2024/11/28 16:03:53 by mtice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	result;

	result = ft_isprint(127);
	printf("%d", result);
	return (0);
}*/

/* TEST
int	main(void)
{
	printf("%d", isprint(127));
	return (0);
}*/
