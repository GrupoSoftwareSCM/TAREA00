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

int opcion,exit=0;

while(!exit)
 {
   menu();
   printf("ingrese su opcion\n");
   scanf("%d",&opcion);
   ("\a");
     switch (opcion)
     {
         case 1:
         generar();
         printf("kino generado!!!\n");
         break;

         case 2:
         break;
         case 3:

         break;
         case 4:

         break;
         case 5:
         break;
         case 6:

         break;
         case 7:

         break;
         case 8:

         break;
         case 9:
         break;
         case 10:
         exit=1;
         printf("*******************");
         printf("\nHasta luego\n");
         printf("*******************\n");
         break;
         default:
         printf("\nopcion no valida\n");
         break;
     }

 }

return(EXIT_SUCCESS);
}
void menu ()
{
  printf("*********************************************************\n");
  printf("\n");
  printf("\t\tBienvenidos\n\n");
  printf("\t\tMenu principal\n\n");
  printf("1)Generar kino\n") ;
  printf("2)\n");
  printf("3)\n");
  printf("4) \n");
  printf("5)\n");
  printf("6) \n");
  printf("10)salir\n");
  printf("***********************************************************\n");

}

void generar()
{
int num_alea; //variable aleatoria para comparaciones
int numero[TAM]={-1}; // definir arreglo para numero aleatorios
int fstop; // variable flag
int i;

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

}




