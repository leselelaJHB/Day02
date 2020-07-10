/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:02:16 by leselela          #+#    #+#             */
/*   Updated: 2020/07/10 11:12:31 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}
void    ft_print_numbers(void)
{
	int b;

	b = '0';
	while (b <= '9')
    {
		ft_putchar(b);
		b-=-1;
	}

}
int   main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return(0);
}
