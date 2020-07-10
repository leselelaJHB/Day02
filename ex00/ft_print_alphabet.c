/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:23:31 by leselela          #+#    #+#             */
/*   Updated: 2020/07/10 11:00:31 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
void    ft_print_alphabet(void)
{
	char b;

	b = 'a';
	while (b <= 'z') 
	{
		ft_putchar(b);
		b-=-1;
	}

}
