#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Aceito pelo Marvin

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

    

    //Time 2
    char time2[40];
    fgets(time2, 40, stdin);
    time2[strlen(time2) - 1] = '\0'; 

    //Forças 
    int forcaG2 = 0;
    int forcaZ2 = 0;
    int forcaL2 = 0;
    int forcaV2 = 0;
    int forcaM2 = 0;
    int forcaA2 = 0;

    for (int i = 0; i < 11; i++) {
        fgets(string, sizeof(string), stdin);
        tamanhoString = strlen(string);

        numero[0] = string[tamanhoString - 3];
        numero[1] = string[tamanhoString - 2];
        numero[2] = '\0';

        overall = atoi(numero);

        if (string[tamanhoString - 5] == 'G') {
            forcaG2 += overall;
        } else if (string[tamanhoString - 5] == 'L') {
            forcaL2 += overall;
        } else if (string[tamanhoString - 5] == 'Z') {
            forcaZ2 += overall;
        } else if (string[tamanhoString - 5] == 'V') {
            forcaV2 += overall;
        } else if (string[tamanhoString - 5] == 'M') {
            forcaM2 += overall;
        } else if (string[tamanhoString - 5] == 'A') {
            forcaA2 += overall;
        }
    }

    //Calculo Media 1
    double mediaF;

    mediaF = (8*(forcaG) + 10*(forcaL) + 5*(forcaZ) + 8*(forcaV) + 11*(forcaM) + 12*(forcaA))/100.0;

    //Calculo Media 2
    double mediaF2;

    mediaF2 = (8*(forcaG2) + 10*(forcaL2) + 5*(forcaZ2) + 8*(forcaV2) + 11*(forcaM2) + 12*(forcaA2))/100.0;

    
    printf("%s: %.2lf de forca\n", time, mediaF); 
    printf("%s: %.2lf de forca\n", time2, mediaF2);   

    if(mediaF > mediaF2){
        printf("%s eh mais forte\n", time);        
    } else{
        printf("%s eh mais forte\n", time2);
    }

    return 0;
}