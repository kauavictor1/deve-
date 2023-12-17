#include <stdio.h>
#include <stdlib.h>

struct dados_aluno {
	
	char nome[200];
	int idade;
	int nota;
};

void mediadoaluno(float media){
	if(media >= 7){
		printf("media: %f \n", media);
		printf("aprovado");
	}else if(media >= 5){
		printf("media: %f \n", media);
		printf("em recuperaçao");
	}else{
		printf("media: %f \n", media);
		printf("reprovado");
	}
}

int main(){
	int soma;
	float media;
	struct dados_aluno notas[3];
	int i;
	
	printf("Digite o nome do aluno: ");
	scanf("%s",&notas[i].nome);
	
	printf("Digite a idade do aluno: ");
	scanf("%d",&notas[i].idade);
	
	for(i = 0; i < 3; i++){
		printf("digite a nota do aluno: ");
		scanf("%d",&notas[i].nota);
		
			soma += notas[i].nota;
	}
	
	
	media = soma / 3;

 mediadoaluno(media);
 
	return 0;
}
