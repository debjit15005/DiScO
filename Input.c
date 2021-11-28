#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *the_file = fopen("SampleInput.csv", "r");
    if(the_file == NULL) {
        perror("Unable to open the file.");
        exit(1);
    }

    char line[100];

    while(fgets(line, sizeof(line), the_file)) {
        char *token;

        token = strtok(line, ",");

        while(token!= NULL ){
            printf("%s \n", token);
            token = strtok(NULL, ",");
        }
        printf("\n");
    }
}