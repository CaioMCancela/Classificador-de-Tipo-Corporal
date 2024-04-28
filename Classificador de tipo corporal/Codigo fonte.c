#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float peso;

    printf("Informe a idade: ");
    scanf("%i", &idade);

    if(idade >= 18){
        printf("Informe o Peso: ");
        scanf("%f", &peso);
        if(peso < 60){
           printf("\nSua modalidade: Magro\n\n\n");
        } else if(peso >= 60 && peso < 90){
            printf("\nSua modalidade: Médio\n\n\n");
        } else {
            printf("\nSua modalidade: Pesado\n\n\n");
        }
    }

    printf("Pressione Enter para sair...");
    fflush(stdin);
    getchar();
    return 0;
}
