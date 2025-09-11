#include <stdio.h>

int main(){
   printf("Desafio nível aventureiro \n");
   printf("\n");
   printf("Carta 1 \n");

   char Estado;
   char Codigo[20];
   char Cidade[20];
   int População = 9265000;
   float Área = 9167.617;
   float PIB = 23.6;
   int Turismo;
   float Densidade= (float) População / Área;
   float PIB_per_Capita= (float) População / PIB;


   printf("O estado é: Amapá \n");
   printf("O código do estado é: A01\n");
   printf("A cidade é: Macapá \n");
   printf("O número de habitantes é: 9265000 \n");
   printf("A área da cidade é: 9.167,617km² \n");
   printf("O PIB é: 23,6 bilhões \n");
   printf("O número de pontos turísticos é: 15 \n");
   printf("A densidade populacional é: %.2f hab/km²\n", Densidade);
   printf("O PIB per Capita é: %.2f reais \n", PIB_per_Capita);
   

printf("\n");

   int População2= 322010400;
   float Área2= 27.768;
   float PIB2 = 76.27;
   float Densidade2= (float) População2 / Área2;
   float PIB_per_Capita2= (float) População2 / PIB2;

   printf("Carta 2 \n");

   printf("O estado é: Alagoas \n");
   printf("O código do estado é: A02\n");
   printf("A cidade é: Maceió \n");
   printf("O número de habitantes é: 322010400 \n");
   printf("A área da cidade é: 27.768km² \n");
   printf("O PIB é: 76,27 bilhões de reais \n");
   printf("O número de pontos túristicos é: 20 \n");
   printf("A densidade populacional é: %.2f hab/km²\n", Densidade2);
   printf("O PIB per Capita é: %.2f reais \n", PIB_per_Capita2);
   
   printf("\n");

      return 0;
}
