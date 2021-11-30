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
