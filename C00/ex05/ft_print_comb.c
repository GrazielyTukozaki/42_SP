/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:05:05 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/11 14:48:37 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

• Escreva uma função que mostre, em ordem crescente, todas as diferentes combinações de três números diferentes em ordem crescente - sim, a repetição é proposital. 
• Isso resulta em algo do tipo: 
$>./a.out | cat -e 
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$> 
• 987 fica de fora porque o 789 já está presente 
• 999 fica de fora porque esse número não tem exclusivamente números diferentes uns dos outros. 
• Ela deve ser prototipada da seguinte maneira: 
void ft_print_comb(void); 

*/
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(int x, int y, int z);
void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	write (1, "\n", 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar(10);
}

void	ft_print(int x, int y, int z)
{
	int	i;
	int	j;
	int	k;

	i = x;
	j = y;
	k = z;
	if ((i < j) && (j < k))
	{
		if ((i != 55) && (j != 56) && (k != 57))
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			ft_putchar(44);
			ft_putchar(32);
		}
		else if ((i == 55) && (j == 56) && (k == 57))
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
		}
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
