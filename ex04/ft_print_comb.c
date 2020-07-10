/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leselela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:23:41 by leselela          #+#    #+#             */
/*   Updated: 2020/07/10 17:36:29 by leselela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_print_comb(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				c++;
			}
			c =  '0';
			b++;
		}
		b =  '0';
		a++;
	}
}

void  ft_print_digits(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	ft_putchar(',');
	ft_putchar(' ');
}

void    ft_print_repetition(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a < '9')
	{
		while (a < '9')
		{
			while (a < '9')
			{
				ft_print_digits(a, b, c); // Call our print function
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}

void  ft_print_reset(void)
{
	char a = '0';
	char b = '0';
	char c = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_print_digits(a, b, c);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
