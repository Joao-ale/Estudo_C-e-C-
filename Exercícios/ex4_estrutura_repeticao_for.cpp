#include<stdio.h>

int alunos, i, maiorAluno;
float altura, raio, volumeCilindro, maiorVolume;

int main(){
    printf("Quantos alunos tem na sala? ");
    scanf("%d",&alunos);

    for(i=1;i<=alunos;i++){
        printf("Qual a altura do cilindro: ");
        scanf("%f",&altura);
        printf("Qual o raio do cilindro: ");
        scanf("%f",&raio);
        volumeCilindro = 3.141592 * raio * raio * altura;
        printf("\nA volume do cilindro do aluno %d e de %.2f\n", i, volumeCilindro);

        //Verifica se o volume atual é maior que o maior volume já digitado
        if (volumeCilindro > maiorVolume){
            maiorVolume = volumeCilindro;
            maiorAluno = i;
        }
    }
    printf("O maior volume e do aluno %d com um cilindro de volume %.2f", maiorAluno, maiorVolume);
    return 0;
}