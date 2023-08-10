#include <stdio.h>
#include <string.h>

#define DISCIPLINAS 5

struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[DISCIPLINAS][50];
};

int main() {
    struct Aluno aluno;
    
    printf("Cadastro de Aluno\n");
    
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    
    printf("Matrícula: ");
    scanf("%d", &aluno.matricula);
    getchar();  
    
    printf("Endereço: ");
    fgets(aluno.endereco, sizeof(aluno.endereco), stdin);
    
    printf("Curso: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);
    
    printf("Período: ");
    fgets(aluno.periodo, sizeof(aluno.periodo), stdin);
    
    for (int i = 0; i < DISCIPLINAS; ++i) {
        printf("Disciplina %d: ", i + 1);
        fgets(aluno.disciplinas[i], sizeof(aluno.disciplinas[i]), stdin);
    }
    
    printf("\nInformações cadastradas:\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Endereço: %s", aluno.endereco);
    printf("Curso: %s", aluno.curso);
    printf("Período: %s", aluno.periodo);
    printf("Disciplinas:\n");
    for (int i = 0; i < DISCIPLINAS; ++i) {
        printf("  %d. %s", i + 1, aluno.disciplinas[i]);
    }
    
    return 0;
}
