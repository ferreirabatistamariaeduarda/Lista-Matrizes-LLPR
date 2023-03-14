#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    
    printf("Digite os valores das matrizes\n");

	for (int i=0; i<3; i++ ){
		for (int j=0; j<3; j++ ){
			printf("Linha: %d, Coluna %d = ", i+1, j+1);
     		scanf("%d", &A[i][j]);

  		}
	}

   
    printf("Matriz indentidade:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
