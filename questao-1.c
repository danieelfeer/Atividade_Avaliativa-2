#include <stdio.h>
//Aceita pelo marvin
int main() {
   
    int tamanhoVetor = 10;
    int vetorAtual[tamanhoVetor];
    int vetorResultado[tamanhoVetor - 1];

    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetorAtual[i]);
        printf("%d", vetorAtual[i]);
        if(i < tamanhoVetor - 1){
            printf(" ");
        }
    }
    
    printf("\n");

    while(tamanhoVetor > 1){

        for(int i = 0; i < tamanhoVetor -1; i++){
            vetorResultado[i] = vetorAtual[i] + vetorAtual[i + 1];
        }

        for(int i = 0; i < tamanhoVetor - 1; i++){
            vetorAtual[i] = vetorResultado[i];
        }

        tamanhoVetor--;

        for(int j = 0; j < tamanhoVetor; j++){
            printf("%d", vetorResultado[j]);
            if(j < tamanhoVetor - 1){
                printf(" ");
            }
        }
        printf("\n");

        

    }

    return 0;
}
