/*
	Versão inicial do programa da lista linear de números	implementada por CONTIGUIDADE.
*/
#include <stdio.h>

#define MAXIMO 50

typedef int TItem;

int main(void)
{	
	int numero, final, cont, soma, qtde;
	TItem lista[MAXIMO];

	/* inicializando a variável de controle do fim da lista */
	final = 0;
	
	while (1)
	{	
		printf("\nInforme o número: ");
		scanf("%d", &numero);

		if (numero < 0)
			break;

		lista[final] = numero;
		final = final + 1;
	}

	/* imprimindo os valores da lista */
	if (final == 0)
		puts("\n\nLista vazia");
	else
	{	
		soma = 0;
		qtde = 0;
		printf("\n\n\nConteúdo da lista:\n");

		cont = 0;

		while (cont != final)
		{	
			printf("%d\n", lista[cont]);

			soma = soma + lista[cont];
			qtde = qtde + 1;
			cont = cont + 1;
		}
		
		printf("\nSoma = %d   Média = %.2f\n", soma, soma / (float)qtde);
	}
	
	while (1)
	{	
		printf("\nInforme o valor a pesquisar: ");
		scanf("%d", &numero);
	
		if (numero < 0)
			break;
		
		cont = 0;

		while (cont < final && numero != lista[cont])
			cont = cont + 1;
	
		if (cont == final)
			puts("\nValor não encontrado");
		else
			puts("\nValor existe na lista");
	}
	
	return 0;
}
