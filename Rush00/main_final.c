/* 
Você  deverá escrever uma função tendo como parametro duas variaveis de tipo inteiro nomeadas respectivamente x e y. Sua função deve exibir na tela um retangulo de x caracteres de largura, e y
caracteres de altura.

Única função permitida: WRITE.
*/

#include <unistd.h>

void	temp2(int x, char *char_letter);
void	rush(int x, int y);

int	main(void)
{
	rush(5,3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}

void	rush(int x, int y)
{
	char	letters[2];
	char	*char_letter;
	int		f;

	char_letter = letters;
	f = 1;
	while (f <= y)
	{
		if (f == 1)
		{
			char_letter = "AB";
		}
		else if (f == y)
		{
			char_letter = "CB";
		}
		else
		{
			char_letter = "B ";
		}
		temp2(x, char_letter);
		f++;
	}
}

void	temp2(int x, char *char_letter)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			write (1, &char_letter[0], 1);
		else
			write (1, &char_letter[1], 1);
		i++;
	}
	write (1, "\n", 1);
}
