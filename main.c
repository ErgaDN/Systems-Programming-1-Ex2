#include <stdio.h>
#include "my_mat.h"

int main() {
    char chooseMethod = ' ';
    scanf("%c", &chooseMethod);
    while (chooseMethod != 'D') {
        if (chooseMethod == 'A') {
            getForMat();
        } 
        else if (chooseMethod == 'B') {
            int i, j;
            scanf("%d", &i);
            scanf("%d", &j);
            routeExists(i, j);
        } 
        else if (chooseMethod == 'C') {
            int i, j;
            scanf("%d", &i);
            scanf("%d", &j);
            shortRoute(i, j);
        }
        scanf("%c", &chooseMethod);
    }

    return 0;
}


