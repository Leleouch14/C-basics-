#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    printf("enter the number of rows, coloumns: ");
    scanf("%d", &i);
    scanf("%d", &j);
    //we r allocating memo here
    int **matrix = malloc(i * sizeof(int *));
    for(int r =0; r <i; r++){
        matrix[r] = malloc(j * sizeof(int));
    }
    //now we will input stuff
    printf("Enter the value for your matrix: ");
    for(int r = 0; r < i; r++){
        for(int c = 0; c < j; c++){
            printf("matrix[%d][%d]: ", r, c);
            scanf("%d", &matrix[r][c]);
        }
    }
    //print
    printf("\nyour 2d matrix\n");
    for(int r = 0; r<i; r++){
        for(int c = 0; c<j; c++){
            printf("%d", matrix[r][c], " ");
        }
        printf("\n");
    }
    //very important: freeing up the memory to avoid memory leak
    //always clean up in reverse order of assignment
    for(int r = 0; r < i; r++){
        free(matrix[r]);
    }
    free(matrix);

    return 0;
}