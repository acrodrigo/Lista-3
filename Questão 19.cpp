#include<stdio.h>
#include<conio.h>
#define t 3
	int main(){
		int vet[t];
		int i, maior=0 , menor=10000;
		for (i=0; i<=t; i++)
			{
				printf("Digite um valor \n");
				scanf("%d", &vet[i]);
			}
			
			for(i=0; i<t ;i++) 
			{
				if(vet[i]>maior)
					{
						maior=vet[i];
					}
						if (vet[i]<menor)
						{
						menor=
						vet[i];
						}		
			
				}
				printf("o maoir inteiro �, %d\n", maior);
				/*printf("A posi��o do maior elemento � %d\n", i);*/
				printf("O menor inteiro � , %d", menor);
				/*printf("A posi��o do menor elemento � %d\n", i);*/
}
