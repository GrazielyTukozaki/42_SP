/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:51:39 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:49:20 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre todas as diferentes combinações de dois números entre 0 e 99, em ordem crescente. 
• Isso resulta em algo do tipo: 
$>./a.out | cat -e 
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$> 
• Ela deve ser prototipada da seguinte maneira: 
void ft_print_comb2(void); 

*/

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(int w, int x, int y, int z);
void	ft_right_numbers(void);
void	ft_left_numbers(int w, int x);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	write (1, "\n", 1);
}

void	ft_print_comb2(void)
{
	ft_right_numbers();
	ft_putchar(10);
}

void	ft_right_numbers(void)
{
	int	i;
	int	j;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			ft_left_numbers(i, j);
			j++;
		}
		i++;
	}
}

void	ft_left_numbers(int w, int x)
{
	int	k;
	int	l;

	k = 48;
	while (k <= 57)
	{
		l = 48;
		while (l <= 57)
		{
			if ((w == 57) && (x == 56) && (k == 57) && (l == 57))
			{
				ft_putchar(w);
				ft_putchar(x);
				ft_putchar(32);
				ft_putchar(k);
				ft_putchar(l);
				break ;
			}
			ft_print (w, x, k, l);
			l++;
		}
		k++;
	}
}

void	ft_print(int w, int x, int y, int z)
{
	if ((x < z) && (w == y))
	{
		ft_putchar(w);
		ft_putchar(x);
		ft_putchar(32);
		ft_putchar(y);
		ft_putchar(z);
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
