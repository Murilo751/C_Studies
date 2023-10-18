#include <stdio.h>
#include <locale.h>

struct cadastro{
    char matricula[11];
    char nome[101];
    char disciplina[101];
    int n1, n2, n3;

};

int E1S (int){
    setlocale(LC_ALL,"pt-br");
    int alunoQtd;
    printf("Digame a quantidade de alunos ");
    scanf("%d", &alunoQtd);
    getchar();

    struct cadastro aluno[alunoQtd];

    for (int i = 0; i < alunoQtd; ++i) {
        printf("Digite a matricula do aluno %d ", i + 1);
        fgets(aluno[i].matricula, 10, stdin);
        fflush(stdin);

        printf("Digite o nome do aluno %d ", i + 1);
        fgets (aluno[i].nome, 100, stdin);
        fflush(stdin);

        printf("Digite a disciplina escolhida pelo aluno %d ", i + 1);
        fgets(aluno[i].disciplina, 100, stdin);
        fflush(stdin);

        printf("Digite a primeira nota do aluno %d ", i + 1);
        scanf("%d", &aluno[i].n1);

        printf("Digite a segunda nota do aluno %d ", i + 1);
        scanf("%d", &aluno[i].n2);

        printf("Digite a terceira nota do aluno %d ", i + 1);
        scanf("%d", &aluno[i].n3);
    }

    printf("---------------------------------------------------------------------------------------------------------");


    for (int j = 0; j < alunoQtd; ++j) {
        printf("A matricula do aluno %d é %d\n", j + 1, aluno[j].matricula);

        printf("O nome do aluno %d é %s\n", j + 1 ,aluno[j].nome);

        printf("A disciplina %s pelo aluno %d\n", aluno[j].disciplina, j + 1);

        printf("A primeira nota de %s é %d\n", aluno[j].nome, aluno[j].n1);

        printf("A segunda nota de %s é %d\n", aluno[j].nome, aluno[j].n2);

        printf("A terceira nota de %s é %d\n", aluno[j].nome, aluno[j].n3);

    }

    return 0;
}