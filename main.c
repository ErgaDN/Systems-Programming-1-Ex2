#include <stdio.h>
#include "my_mat.h"

/** The progrem receives a char and sends to the appropriate program:
 *      A - Sending to the function getForMat()
 *      B - Get 2 indexes and Send to the function routeExists(int i, int j)
 *      C - Get 2 indexes and Send to the function shortRoute(int i, int j)
 *      D - The program stops.
*/

int main() {
    char chooseMethod = ' ';
    scanf(" %c", &chooseMethod);
    while (chooseMethod != 'D') {
        if (chooseMethod == 'A') {
            getForMat();
        } 
        else if (chooseMethod == 'B') {
            int i, j;
            scanf(" %d", &i);
            scanf(" %d", &j);
            routeExists(i, j);
        } 
        else if (chooseMethod == 'C') {
            int i, j;
            scanf(" %d", &i);
            scanf(" %d", &j);
            shortRoute(i, j);
        }
        scanf(" %c", &chooseMethod);
    }

    return 0;
}


