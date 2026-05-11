#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){
    char *output;
    if(argc > 1){
        int len = argc+4; //all spaces + \n + "not "

        for (int i = 0; i < argc; i++){
            len += strlen(argv[i]);
        }
        output = malloc(len);
        strcpy(output, "not ");


        for (int i = 1; i < argc; i++){
            strcat(output, argv[i]);

            if (i < argc - 1){
                strcat(output, " ");
            }
            else{
                strcat(output, "\n");
            }
            printf(output);
        }
    }
    else{
        output = "n\n";
    }
    for(;;){
        printf("%s",output);
    }
}