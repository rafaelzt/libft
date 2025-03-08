#include "inc/libft.h"
#include <stdio.h>

int	main(void)
{
	long	nbr;

	nbr = ft_atol("   -+1234");
	printf("%ld\n", nbr);
	return (0);
}

/*
cc -Wall -Wextra -Werror -Iinc caca.c libft.a -o caca

O que cada parte do comando faz:

• cc: É o compilador C padrão em muitos sistemas Unix-like (pode ser um alias para clang ou gcc).
• -Wall -Wextra -Werror: Ativam múltiplas verificações de warnings e tratam todos os warnings como erros, o que ajuda a manter o código mais rigoroso e seguro.
• -Iinc: Adiciona a pasta “inc” ao caminho de pesquisa de arquivos de cabeçalho (.h).
• caca.c libft.a: Indica os arquivos que devem ser compilados/ligados (o arquivo-fonte caca.c e a biblioteca libft.a).
• -o caca: Define o nome do executável gerado como “caca”.
*/