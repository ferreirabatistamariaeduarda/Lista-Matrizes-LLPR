#include <stdio.h>

int main() {
	
    int A[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    
    printf("Digite os valores das matrizes\n");

	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		scanf("%d", &A[i][j]);

  		}
	}

   
    printf("Matriz diagonal:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
