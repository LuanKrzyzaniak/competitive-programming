// ACCEPTED
#include <stdio.h>

int main(){
    int side, board, possibilities, attack, result;

    scanf("%d", &side);
    for (int i = 1; i <= side; i++)
    {
        board = i * i;
        possibilities = ( board * (board-1) ) / 2;
        attack = 4 * ( (i-1) * (i-2) );
        result = possibilities - attack;
        printf("%d\n", result);
    }
    
    return 0;
}