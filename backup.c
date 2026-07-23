#include <stdio.h>

int main(){

   

    int opcao = 0;

    char nome[50];
    char usuario[30];
    char senha[30];

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
        nome[50];
        usuario[30];
        senha[30];
        printf("Voce escolheu Cadastro\n\n");

        printf("Digite seu nome: ");
        scanf("%49s", nome);
        printf("Digite seu usuario: ");
        scanf("%29s", usuario);
        printf("Digite sua senha: ");
        scanf("%29s", senha);
        printf("\n");

        printf("Nome: %s\n", nome);
        printf("Usuario: %s\n", usuario);
        printf("Senha: %s\n", senha);

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