#include <stdio.h>
#include <math.h>
#include "my_mat.h"


int arr[10][10] = {0};

void getForMat (){
    for (int i = 0; 1 < sizeof(arr) ; i++) {
        for (int j = 0 ; j < sizeof(arr) ; j++) {
            scanf("%d" , &arr[i][j]);
        }
    }
    //floydWarshall();
}
   

void floydWarshall (){
    for (int k = 1 ; k < sizeof(arr) ; k++) {
        for (int i = 1 ; i < sizeof(arr) ; i++) {
            for (int j = 1 ; j < sizeof(arr) ; j++) {
                if ((arr[i][j] == 0 && arr[i][k] == 0) || (arr[i][j] == 0 && arr[k][j] == 0)) {
                    arr[i][j] = 0;
                } else if (arr[i][j] == 0) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                } else if (arr[i][k] + arr[k][j] == 0) {
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

void routeExists (int i, int j) {
    if ( arr[i][j] == 0) {
        printf("False\n");
    } else {
        printf("True\n");
    }
}

void shortRoute (int i, int j) {
    if (arr[i][j] == 0) {
        printf("-1\n");
    } else {
        printf("%d\n" ,arr[i][j]);
    }
}

 