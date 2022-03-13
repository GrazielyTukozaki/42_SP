/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbasilio <gbasilio@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:53:47 by gbasilio          #+#    #+#             */
/*   Updated: 2022/02/18 16:41:30 by gbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*                                                                            

• Escreva uma função que mostre um número passado como parâmetro. A função deverá ser capaz de mostrar a totalidade dos valores possíveis em uma variável de tipo int. 
• Ela deverá ser prototipada da seguinte maneira: 
void ft_putnbr(int nb); 
• Por exemplo: 
◦ ft_putnbr(42) mostra "42". 

*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	unsigned int	num;

	if (nb < 0)
	{
		write (1, "-", 1);
		nbr = (unsigned int)(-nb);
	}
	else
		nbr = (unsigned int)(nb);
	num = (nbr % 10) + '0';
	nbr = nbr / 10;
	if (nbr > 0)
		ft_putnbr(nbr);
	write(1, &num, 2);
	return ;
}

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
