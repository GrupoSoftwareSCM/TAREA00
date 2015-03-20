#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 14

int buscarNumero(int numero,int arreglo[],int tam){
int i,stop=0;

for (i=0;(i<tam && stop==0); i++){
     if(arreglo[i]==numero)
     stop=1;

}
return stop;
}


int main(int argc, char** argv) {

int num_alea; //variable aleatoria para comparaciones
int numero[TAM]={-1}; // definir arreglo para numero aleatorios
int fstop; // variable flag
int i;

printf("ESTE ES EL KINO\n\n ");

srand(time(NULL));

for(i=0;i<TAM;i++){

      do{
      num_alea=1+rand()%(25);
      fstop=buscarNumero(num_alea,numero,TAM);
      }while(fstop);

      numero[i]=num_alea;
    //  printf("%d)",i+1);     estos dos printf son para comprobar lo numero random
    //  printf(" %d\n",numero[i]);
}
int j;
for(i=0;i<TAM-1;i++){ // para ordenamiento
   for(j=i+1;j<TAM;j++){
   if( numero[i]> numero[j])
   {
   int temp= numero[i];
   numero[i]= numero[j];
   numero[j]=temp;
   }
   }
  }
for(i=0;i<TAM;i++){
printf("%d)",i+1);
printf(" %d\n",numero[i]);}

return(EXIT_SUCCESS);
}





