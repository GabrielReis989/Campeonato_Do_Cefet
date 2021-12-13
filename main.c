#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    printf("\n\t/*/*/*/*/*/*/*/*/*/*/*/*//*/*/*/*/*/*/*/*/*//\n");
    printf("\n\t/*/*/*/*/*/*/*/*/*/*/*/*//*/*/*/*/*/*/*/*/*//\n");
    printf("\n\t\t\tCefet Championship");
    printf("\n\t/*/*/*/*/*/*/*/*/*/*/*/*//*/*/*/*/*/*/*/*/*//\n");
    printf("\n\t/*/*/*/*/*/*/*/*/*/*/*/*//*/*/*/*/*/*/*/*/*//\n");

    system("color 0A");

    float id[11],media,soma;
    int peso[11];
    int maiorpeso,menorpeso;
    float alt[11],altsoma,media2;
    int I,J,K =0;

    for(I=0;I<11;I++)
    {
        printf("\n\tPOR FAVOR ME INFORME SUA IDADE\t");
        scanf("%f",&id[I]);

        soma += id[I];
    }

    for(K=0;K<11;K++)
    {
        printf("\n\tPOR FAVOR ME INFORME O SEU PESO\t");
        scanf("%d",&peso[K]);

        if (K == 0)
    {
      menorpeso = peso[K];
      maiorpeso = peso[K];
    }

    if (peso[K] > maiorpeso)
    {
      maiorpeso = peso[K];
    }
    if (menorpeso > peso[K])
    {
      menorpeso = peso[K];
    }
    }

    for(J=0;J<11;J++)
    {
        //AS ALTURAS ESTAM EM CENTIMETROS
        printf("\n\tPOR FAVOR ME INFORME SUA ALTURA\t");
        scanf("%f",&alt[J]);

        altsoma += alt[J];

    }

    media=soma/11;
    printf("\n\tA MÉDIA DAS IDADES DOS JGADORES É: %f \n",media);

    media2=altsoma/11;
    printf("\n\tA MÉDIA DAS ALTURAS DOS JGADORES É: %f cm\n",media2);

    printf("\nO PESO DO JOGADOR MAIS PESADO É %d quilos E O PESO DO JOGADOR MAIS MAGRO É %d quilos\n", maiorpeso, menorpeso);

    system("pause");


    return 0;
}
