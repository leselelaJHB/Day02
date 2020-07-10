/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:49:53 by leselela          #+#    #+#             */
/*   Updated: 2020/07/10 13:12:13 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
void    ft_print_reverse_alphabet(void)
{
	char b;

	b = 'z';
	while (b <= 'a')
	{
		ft_putchar(b);
	    b-=-1;
    }

}
