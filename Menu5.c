#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("Menu 5\n");
    printf("1.Given two websites A and B, display the website which is reachable by both A and B and can also reach to all such websites that both A and B can reach.\n");
    printf("2.Given two websites A and B, display the website which can reach to both A and B and is also reachable from all such websites which can reach to both A and B.\n");
    printf("3.Is the lattice distributive?\n");
    printf("4.Return to Menu 4\n");

    int j;
    scanf("%d", &j);
    
    switch(j)
    {
        case 1:
            
            break;

        case 2:

            break;

        case 3:

            break;
        
        case 4:

            break;

        default:
        printf("Error!Invalid input.");
    }

    return 0;

}
