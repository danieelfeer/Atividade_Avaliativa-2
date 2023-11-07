#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    //Time
    char time[40];
    fgets(time, 40, stdin);
    
    time[strlen(time) - 1] = '\0';
    
    //String
    char string[40];
    
    //Overall
    char numero[3];
    int tamanhoString;
    int overall;

    //Forças
    int forcaG = 0;
    int forcaZ = 0;
    int forcaL = 0;
    int forcaV = 0;
    int forcaM = 0;
    int forcaA = 0;
     
    for(int i= 0; i < 11; i++){
        fgets(string, 40, stdin);
        tamanhoString = strlen(string);

        numero[0] = string[tamanhoString - 3]; 
        numero[1] = string[tamanhoString - 2];
        numero[2] = '\0';  

        overall = atoi(numero);
        printf("%d\n", overall);
        if(string[tamanhoString - 5] == 'G'){
            forcaG += overall;
        } else if(string[tamanhoString - 5] == 'L'){
            forcaL += overall;
        } else if(string[tamanhoString - 5] == 'Z'){
            forcaZ += overall;
        } else if(string[tamanhoString - 5] == 'V'){
            forcaV += overall;
        } else if(string[tamanhoString - 5] == 'M'){
            forcaM += overall;
        } else if(string[tamanhoString - 5] == 'A'){
            forcaA += overall;
        }
    }

    double mediaF;

    mediaF = (8*(forcaG) + 10*(forcaL) + 5*(forcaZ) + 8*(forcaV) + 11*(forcaM) + 12*(forcaA))/100.0;
    
    printf("%s: %.2lf de forca\n", time, mediaF);    

    return 0;
}