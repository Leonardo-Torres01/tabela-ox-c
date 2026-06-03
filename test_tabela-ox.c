#include <stdio.h>
#include "function_tabela.c"

int main() 
{
    int erros = 0;

    char tabela_teste[3][3] = {{0}};
    char *argv_fake[] = {"./tabela-ox", "XOX", "XXO", "OXX"};
    preencher_tabela_argumentos(tabela_teste, 4, argv_fake);

    if (tabela_teste[0][0] != 'X' || tabela_teste[1][1] != 'X' || tabela_teste[2][0] != 'O') 
    {
        erros++;
    }

    if (erros == 0) 
    {
        printf("Todos os testes de tabela-ox: PASSOU\n");
    }
     else 
     {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}