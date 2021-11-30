#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct matrix {
    int** mat;
    int n;
};

int main() {

    FILE* fptr = NULL;
        fptr = fopen("SampleInput.csv", "r");

        if(fptr == NULL){
            printf("Error reading file !!\n");
            return NULL;
        }
        else {
            int n = 0;
            char ch;

            while((ch = fgetc(fptr)) != '\n'){
                if(ch == ',')
                    n++;
            }

            printf("N = %d \n", n);
        
        struct matrix* input;
        input->n = n;
        input->mat = (int*)malloc(n * sizeof(int));

        for(int i = 0; i < n; i++){
            input->mat[i] = (int*)malloc(n * sizeof(int));
        }
            for(int i=0;i<n;i++)
            {
                while((ch = fgetc(fptr)) != ',');
                for(int j=0;j<n;j++)
                {
                    input->mat[i][j]=fgetc(fptr)-'0';
                    fgetc(fptr);
                }
            }
            return input;
    }
}
int menu1(){
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

    int i;
    scanf("%d", &i);

    switch(i)
    {
        case 1:
            printf("dummy code1\n");
            break;
        case 2:
            printf("dummy code2\n");
            break;
        case 3:
            printf("dummy code3\n");
            break;
        case 4:
            printf("dummy code4\n");
            break;
        case 5:
            printf("dummy code5\n");
            break;
        case 6:
            printf("dummy code6\n");
            break;
        case 7:
            printf("dummy code7\n");
            break;
        case 8:
            printf("dummy code8\n");
            break;
        case 9:
            printf("dummy code9\n");
            break;
        default: 
            printf("ERROR! : Invalid Input- Please enter a number between 1 and 9.\n");
    }
    
    return 0;

}
int menu2()
{
    printf("Menu 2\n");
    printf("Do you want to visualize how the network will look if we add minimum links to satisfy the property?\n");
    char ch[20];
    scanf("%s",ch);
    if(!strcmp(ch, "yes")){
        //call function to add min links and then visualize

        printf("Menu 2 exec\n");
    }
    return 0;
}
