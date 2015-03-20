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

int min= 1; int max= 25; //variables de entrada
int num_alea; //variable aleatoria para comparaciones
int numero[TAM]={-1}; // definir arreglo para numero aleatorios
int fstop; // variable flag
int i;

printf("ESTE ES EL KINO\n\n ");

srand(time(NULL));

for(i=0;i<TAM;i++){

    do{
      num_alea=min+rand()%(max-min+1);
      fstop=buscarNumero(num_alea,numero,TAM);
}while(fstop);

numero[i]=num_alea;
printf("%d)",i+1);
printf(" %d\n",numero[i]);
//printf("\n%d",numero[i]);
}
int j;
for(i=0;i<TAM;i++){
   for(j=0;j<TAM;j++){
   if( numero[j]> numero[j+1])
   {
   int temp= numero[j];
   numero[j]= numero[j+1];
   numero[j+1]=temp;
   }
   }
   printf("%d\n",numero[i]);
   system("pause");
}
for(i=0;i<TAM;i++){
printf("%d)",i+1);
printf(" %d\n",numero[i]);}

return(EXIT_SUCCESS);
}





