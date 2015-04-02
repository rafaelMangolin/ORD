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
        getchar();
        printf("Digite o sobrenome:");
        gets(last);
        getchar();
        printf("Digite o endereço:");
        gets(address);
        getchar();
        printf("Digite a cidade:");
        gets(city);
        getchar();
        printf("Digite o estado:");
        gets(state);
        getchar();
        printf("Digite o CEP:");
        gets(zip);
        getchar();

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
    char aux[3];
    int x = strlen(str);
    if(x < 10){
        sprintf(aux,"0%i", x);
    }else{
        sprintf(aux,"%i", strlen(str));
    }
    fputs("|", fp);
    fputs(aux, fp);
    fputs(str, fp);

}
