#include <stdio.h>

int validar_caractere_tabela(char c) 
{
    return (c == 'X' || c == 'O');
}

void preencher_tabela_argumentos(char tabela[3][3], int argc, char *argv[]) 
{
    int l = 0, c = 0;
    for (int i = 1; i < argc; i++) 
    {
        for (int j = 0; argv[i][j] != '\0'; j++) 
        {
            char caractere = argv[i][j];
            if (validar_caractere_tabela(caractere)) 
            {
                tabela[l][c] = caractere;
                c++;
                if (c == 3) 
                {
                    c = 0;
                    l++;
                }
                if (l == 3) return; 
            }
        }
    }
}
