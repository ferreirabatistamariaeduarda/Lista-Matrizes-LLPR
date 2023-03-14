#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	int A[3][3];
	int B[3][3];
	
	// i = colunas
	// j = Linhas

	printf("Digite os valores das matrizes\n");

	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		scanf("%d", &A[i][j]);

  		}
	}
	
	printf("Matriz A: \n");
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		
  		}
  		printf("\n");
	}
	
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			B[i][j] = A[i][3 - 1 - j];

  		}
	}
	
	
	printf("Matriz B: \n");
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			printf("Linha: %d, Coluna %d = ", B[i][j]);
  	
		}
		printf("\n");
	}
	
	
  return 0;	
}
