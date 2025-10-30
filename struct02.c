#include <stdio.h>

typedef struct{
    int numero;
    int endereco;
    char nome[16];

}Pessoa;

void getPessoa(Pessoa p[]);
int main(){
    Pessoa p1[5];
    getPessoa(p1);
    printf("%d %d %s",p1[1].numero,p1[1].endereco,p1[1].nome);
    return 0;
}

void getPessoa(Pessoa p[]){
    int i;
    for(i = 0;i<5;i++){
    printf("Escreva o nome: ");
    scanf("%s",p[i].nome);
    printf("Escreva o numero de telefone: ");
    scanf("%d",&p[i].numero);
    printf("Escreva o endereco: ");
    scanf("%d",&p[i].endereco);
    }
}

