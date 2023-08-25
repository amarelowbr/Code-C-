#include<stdio.h>
#include<stdlib.h>
 
int main()

{
            	float validos, brancos, nulos, total, porcentagemDeValidos, porcentagemDeBrancos, porcentagemDeNulos;
            	
            	printf("digite os votos validos:");
            	scanf_s("%f",&validos);
            	printf("digite os votos brancos:");
            	scanf_s("%f",&brancos);
            	printf("digite os votos nulos:");
            	scanf_s("%f",&nulos);
            	
            	total=validos+brancos+nulos;
				porcentagemDeBrancos= (brancos/total) * 100;
				porcentagemDeValidos= (validos/total) * 100;
				porcentagemDeNulos=(nulos/total)*100;
            	printf("houveram %.2f votos ao total \n", total);
                
				printf("a porcentagem de votos  validos e: %.0f\n ",porcentagemDeValidos);
                
				
                
				printf("a porcentagem de votos em brancos e: %.0f\n", porcentagemDeBrancos);
				                
                
                
				printf("a porcentagem de votos nulos e: %.0f\n", porcentagemDeNulos);
                
                  
                return 0;
                
				



}
