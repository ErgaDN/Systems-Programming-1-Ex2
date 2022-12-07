#include <stdio.h>
#include <math.h>
#include "my_mat.h"

// Global matrix initialization
int arr[10][10] = {0};

// The function accepts variables and puts them into the matrix.
// The matrix is sent to the function floydWarshall().
void getForMat (){
    for (int i = 0; i < 10; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            scanf(" %d" , &arr[i][j]);
        }
    }

    floydWarshall();
}
   

// The function runs the Floyd Warshall algorithm on the matrix, 
// which updates the matrix according to the route with the smallest weight.
void floydWarshall (){
    for (int k = 0 ; k < 10 ; k++) {
        for (int i = 0 ; i < 10 ; i++) {
            for (int j = 0 ; j < 10 ; j++) {
                if (i == j) {
                    continue;
                }
                if ((arr[i][j] == 0 && arr[i][k] == 0) || (arr[i][j] == 0 && arr[k][j] == 0)) {
                    arr[i][j] = 0;
                } else if (arr[i][j] == 0) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
                 else if (arr[i][k] == 0 || arr[k][j] == 0) {
                     arr[i][j] =  arr[i][j];
                } else {
                    if(arr[i][j]  > (arr[i][k] + arr[k][j])) {
                        arr[i][j] = (arr[i][k] + arr[k][j]);
                    }
                }
            }
        }
    }
}


// The futction will return True if the route from i to j are exists. Else, it will return False.
void routeExists (int i, int j) {
    if ( arr[i][j] == 0) {
        printf("False\n");
    } else {
        printf("True\n");
    }
}


// The function will return the smallest wight for the route from i to j.
// If no such route exists, the function will return -1.
void shortRoute (int i, int j) {
    if (arr[i][j] == 0) {
        printf("-1\n");
    } else {
        printf("%d\n" ,arr[i][j]);
    }
}

 