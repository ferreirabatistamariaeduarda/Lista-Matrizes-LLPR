#include <stdio.h>
#include <locale.h>
#define l 2
#define c 2

void reflexo(int a[][2], int r[][2], int area) {
    int i, j;
    for (i = 0; i < area; i++) for (j = 0; j < area; j++) r[i][j] = a[i][area-1-j];   
}

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
    int m_a[l][c] = {{1, 2}, {3, 4}};
    int reflx[l][c],i, j;
    
    reflexo(m_a, reflx, 2);
    
    printf("Matriz A:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", m_a[i][j]);
        printf("\n");
    }
    
    printf("\n");
    
    printf("A matriz de é:\n");
    
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) printf("%d ", reflx[i][j]);
        printf("\n");
    }
    
    return 0;
}
