#include <stdio.h>

int main(){

   

    int opcao = 0;

    while(opcao != 3)
    {

    printf("  ========================================\n");
    printf("             LOGIN SYSTEM\n");
    printf("  ========================================\n\n");

         printf(" 1 - Login\n 2 - Cadastro\n 3 - Sair\n\n");

        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

    if(opcao == 1)
{
    printf("Voce escolheu Login\n\n");
}
    else if(opcao == 2)
    {
        printf("Voce escolheu Cadastro\n\n");
    }
    else if(opcao == 3)
    {
        printf("Encerrando o programa\n\n");
    }
    else
    {
        printf("Numero invalido\n\n");
    }
}
    return 0;
}