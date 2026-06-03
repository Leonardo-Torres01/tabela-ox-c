#include <stdio.h>
#include <stdlib.h>
#include "function_tabela.c"

int main(int argc, char *argv[])
 {
    char tabela[3][3] = {{0}};

    if (argc > 1) 
    {
        preencher_tabela_argumentos(tabela, argc, argv);
    } 
    else 
    {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                char temp;
                printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
                scanf(" %c", &temp);

                while (!validar_caractere_tabela(temp)) 
                {
                    printf("caractere invalido\n");
                    printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
                    scanf(" %c", &temp);
                }
                tabela[i][j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Linha %d Coluna %d: %c\n", i + 1, j + 1, tabela[i][j]);
        }
    }

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}