#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void saveField(char* str, FILE * fp);
int main(){
    FILE * output;
    char first[30], last[30], address[40], city[30], state[30], zip[10];
    int aux = 0;

    if((output=fopen("texto.txt","w+")) == NULL){
        printf("Meça as tentativa de abrir seus arquivos Parça!");
        exit(1);
    }
    do{
        printf("Digite o nome:");
        gets(first);
        printf("Digite o sobrenome:");
        gets(last);
        printf("Digite o endereço:");
        gets(address);
        printf("Digite a cidade:");
        gets(city);
        printf("Digite o estado:");
        gets(state);
        printf("Digite o CEP:");
        gets(zip);

        printf("Deseja salvar? [sim = 1 | não = 0]");
        scanf("%i", &aux);
        if(aux == 1){
            saveField(first, output);
            saveField(last, output);
            saveField(address, output);
            saveField(city, output);
            saveField(state, output);
            saveField(zip, output);
        }

        printf("Deseja continuar cadastrando? [sim = 1 | não = 0]");
        scanf("%i", &aux);

    } while(aux == 1);

    fclose(output);
}

void saveField(char* str, FILE * fp){
    char aux[5];
    sprintf(aux,"%i", strlen(str));
    fputs(aux, fp);
    fputs(str, fp);
    fputs("|", fp);
}
