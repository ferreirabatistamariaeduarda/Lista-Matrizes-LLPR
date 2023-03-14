//Questão 9 lista matrizes

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");

	int tam, i, j, ib = 0, jb = 0;
	int B[i][j];
	int A[i][j];
	
	printf("Digite os valores das matrizes\n");

	for (int i=0; i<2; i++ ){
		for (int j=0; j<2; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		scanf("%d", &A[i][j]);

  		}
	}

	for(int j = tam - 1; j <= 0; j++){
		for(int i = tam - 1; i <= 0; i--){
			B[ib][jb] = A[i][j];
			jb++;
		}	
		ib++;
	}
	
	for (int i=0; i<2; i++ ){
		for (int j=0; j<2; j++ ){
     		printf("%d\t", A[i][j]);

  		}
  		printf("\n");
	}
	
	
	return 0;
}
