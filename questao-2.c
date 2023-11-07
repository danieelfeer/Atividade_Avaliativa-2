#include <stdio.h>
#include <string.h>

int main(){

    //Time
    char time[40];
    fgets(time, 40, stdin);
    printf("%s\n",time);

    //String
    char string[40];
    for(int i= 0; i < 2; i++){
        fgets(string, 40, stdin);
    }
    //Forças
    int forcaG = 0;
    int forcaZ = 0;
    int forcaL = 0;
    int forcaV = 0;
    int forcaM = 0;
    int forcaA = 0;

    for(int i = 0; i < strlen(string); i++){        

        char numero[3];
        int tamanhoString = strlen(string);
        int overall; 

        numero[0] = string[tamanhoString - 3]; 
        numero[1] = string[tamanhoString - 2];
        numero[2] = '\0';  

        overall = atoi(numero);

        if(string[i] == ';'){
            string[i] = string[i+1];
            if(string[i] == 'G'){
                forcaG = 8*overall;
            } else if(string[i] == 'L'){
                forcaL = forcaL + overall
            }
        }   

    }

    

   for(int i= 0; i < 2; i++){
        printf("forca laterais: %d\n", forcaL);
    }     
    

    

    return 0;
}