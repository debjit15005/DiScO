#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("Menu 4\n");
    printf("1.Display the hasse diagram.\n");
    printf("2.Display the website whose link is available in every website.\n");
    printf("3.Display the website which has links of every website.\n");
    printf("4.Display the websites that do not have links to any other website except itself.\n");
    printf("5.Display the websites which can't be reached from any other website except itself.\n");
    printf("6.Given some websites, display the websites which are reachable from all of them.\n");
    printf("7.Given some websites, display the websites from which you can reach all those websites.\n");
    printf("8.Is this relation an example of lattice?\n");
    printf("9.Return to Main Menu\n");

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

        case 5:
            
            break;

        case 6:

            break;

        case 7:

            break;
        
        case 8:

            break;

        case 9:
            
            break;
            
        default:
            printf("Error!Invalid input.");
    }
        return 0;
}