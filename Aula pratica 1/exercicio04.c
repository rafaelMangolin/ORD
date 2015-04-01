//
// Created by rafael on 01/04/15.
//

#include <string.h>
#include <stdio.h>

#include <stdlib.h>

int readFile(FILE * fp, char * str);

int main() {
    FILE * output;
    char first[30], last[30], address[40], city[30], state[30], zip[10], field_aux[40];
    int aux;

    if ((output = fopen("texto.txt", "r+")) == NULL) {
        printf("Meça as tentativa de abrir seus arquivos Parça!");
        exit(1);
    }


    aux = fgetc(output);
    int x = 0;
    int y = 0;
  //while(aux != EOF){

        while(aux == '0' || aux == '|'){
            printf("%c", aux);
            if(x==3){x=0;}
            aux = fgetc(output);
            x++;
        }
       while(x<3){
            printf("\n%c", aux);


            y = (aux-'0');
            printf(" \n y %i",  y);
            aux = fgetc(output);
            x++;
        }
        x=0;
    //}


}
