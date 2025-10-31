#include <stdio.h>

typedef struct{
    int numero;
    int endereco;
    char nome[16];

}Pessoa;

void getPessoa(Pessoa p[]);
void setPessoa(Pessoa p[]);

int main(){
    Pessoa p1[5];
    getPessoa(&p1);
    setPessoa(&p1);

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

void setPessoa(Pessoa p[]){
     for(int i = 0;i< 5;i++){
        printf("Nome: %s\n",p[i].nome);
        printf("Numero: %d\n",p[i].numero);
        printf("Endereco: %d\n",p[i].endereco);

     }

}
