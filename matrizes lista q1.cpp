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
	
	//Matriz Transposta
	
	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
     		printf("%d \t", A[j][i]);
     		B[i][j] = A[j][i];
  		}
  		printf("\n");
	}
		
	
	return 0;	
	
}
