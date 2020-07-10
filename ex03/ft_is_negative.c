/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:15:29 by leselela          #+#    #+#             */
/*   Updated: 2020/07/10 15:56:54 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_is_negative(int n)
{
	if    (n > 0)
{
	ft_putchar('N');
}
else
{
		ft_putchar('P');
	}
}
