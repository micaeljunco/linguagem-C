#include <stdio.h>

int main()
{
    int n_alunos = 6;
    int qtd_notas = n_alunos * 2;
    float nota_alunos[qtd_notas];
    float medias[n_alunos];

    for (size_t i = 0, j = 0; i < n_alunos; i++, j += 2)
    {
        printf("Digite a 1ª nota do %dº aluno: ", i + 1);
        scanf("%f", &nota_alunos[j]);

        printf("Digite a 2ª nota do %dº aluno: ", i + 1);
        scanf("%f", &nota_alunos[j + 1]);

        // Calcula a média das duas notas e armazena no vetor de médias
        medias[i] = (nota_alunos[j] + nota_alunos[j + 1]) / 2.0f;
    }

    int reprovados, de_exame, aprovados;

    printf("\nMédias dos alunos:\n");
    for (size_t i = 0; i < n_alunos; i++)
    {
        printf("Aluno %d: %.2f\t| Situação: ", i + 1, medias[i]);
        if (medias[i] <= 3){
            printf("REPROVADO\n");
            reprovados++;
        } else if (medias[i] < 7){
            printf("DE EXAME\n");
            de_exame++;
        } else {
            printf("APROVADO\n");
            aprovados++;
        }   
    }

    printf("\nTotal de alunos aprovados: \n %d\n", aprovados);
    printf("\nTotal de alunos reprovados: \n %d\n", reprovados);
    printf("\nTotal de alunos de exame: \n %d\n", de_exame);

    float media_classe;

    printf("\nMédia da classe:\n");
    for (size_t i = 0; i < n_alunos; i++) media_classe += medias[i];
    media_classe /= n_alunos;

    printf("%.2f\n", media_classe);

    return 0;
}
