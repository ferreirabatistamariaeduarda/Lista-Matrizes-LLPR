#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int det;
	int A[2][2];
	int B[2][2];
	
	// i = colunas
	// j = Linhas

	printf("Digite os valores das matrizes\n");

	for (int i=0; i<2; i++ ){
		for (int j=0; j<2; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		scanf("%d", &A[i][j]);

  		}
	}

    det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    
    for (int i=0; i<2; i++ ){
		for (int j=0; j<2; j++ ){
			printf("O determinante da matriz A : %d\n", det, A[i][j]);
     	
  		}
  		printf("\n");
	}

    

  
 return 0;	
}
