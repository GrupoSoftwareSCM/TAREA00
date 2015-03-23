#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TAM 14

int buscarNumero(int numero,int arreglo[],int tam){
int i,stop=0;

for (i=0;(i<tam && stop==0); i++){
     if(arreglo[i]==numero)
     stop=1;

}
return stop;
}

int main(int argc,char *argv[]) {

    if(strlen(argv[1]) == 2){
        if(strcmp(argv[1],"-g") == 0 || strcmp(argv[1],"-G") == 0){
            if(argc == 2){
                //printf("la longitud es: %d",strlen(argv[1]));
                int num_alea; //variable aleatoria para comparaciones
                int numero[TAM]={-1}; // definir arreglo para numero aleatorios
                int fstop; // variable flag
                int i;
                FILE* archivo;
                archivo = fopen ("numero.csv", "a");
                printf("**************************\n ");
                printf("Sorteo generado !\n");
                printf("**************************\n ");
                srand(time(NULL));

                for(i=0;i<TAM;i++){
                    do{
                        num_alea=1+rand()%(25);
                        fstop=buscarNumero(num_alea,numero,TAM);
                    }while(fstop);
                    numero[i]=num_alea;
                }
                int j;
                for(i=0;i<TAM-1;i++){ // para ordenamiento
                    for(j=i+1;j<TAM;j++){
                        if( numero[i]> numero[j]){
                            int temp= numero[i];
                            numero[i]= numero[j];
                            numero[j]=temp;
                        }
                    }
                }
                time_t tiempo = time(0);
                struct tm *tlocal = localtime(&tiempo);
                char output[128];
                strftime(output,128,"%d-%m-%y %H:%M:%S",tlocal);
                fprintf(archivo,"%s;",output);
                for(i=0;i<TAM;i++){
                   fprintf(archivo,"%d;",numero[i]);
                    printf("%d)",i+1);
                    printf("%d\n",numero[i]);
                }

                fprintf(archivo,"\n");
                fclose(archivo);
                return(EXIT_SUCCESS);
            }
            else{
                printf("SE INGRESARON MAL LOS PARAMETROS ... \n");
            }

        }
        if(strcmp(argv[1],"-v") == 0 || strcmp(argv[1],"-V") == 0){
            if(argc == 2){
                printf("Integrantes:\n");
                printf("\tJean Cid Bustos\n");
                printf("\tGabriel Sanhueza Alegria\n");
                printf("\tOscar Muñoz Bernales\n");
                printf("Fecha de compilacion: ");

                time_t tiempo = time(0);
                struct tm *tlocal = localtime(&tiempo);
                char output[128];
                strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal); //Fecha de compilacion.
                printf("%s\n",output);
            }
            else{
                printf("SE INGRESARON MAL LOS PARAMETROS ... \n");
            }
        }
    }
    else{
        printf("SE INGRESARON MAL LOS PARAMETROS ... \n");
    }
    return 0;
}
