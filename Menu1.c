#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("Main Menu\n");
    printf("1. Does every website have a link to itself?\n");
    printf("2. Is it possible to always return back to the previous website from the current website in one step?\n");
    printf("3. Does every website has the links to the websites which are reachable from it?\n");
    printf("4. Does there exist any website that contains a link to itself?\n");
    printf("5. Is it impossible to return to the previous website from the current website in one step?\n");
    printf("6. Is it impossible to return to the previous website from the current website in one step(excluding the cases where the current and previous website is same)?\n");
    printf("7. Is it possible to divide the network into multiple pieces such that every website in a piece is reachable from every other website in that piece?\n");
    printf("8. Is this relation an example of poset?\n");
    printf("9. Exit\n");

    

    int j;
    scanf("%d", &j);
    
    switch(j)
    {
        case 1:
            printf("working");
            break;
    }

    return 0;
    

}
