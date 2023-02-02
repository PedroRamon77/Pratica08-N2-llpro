#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define tmax 10

void preencher_vetor(int v[],int tam){
	for(int i=0;i<tmax;i++){
		printf("Digite a idade da %dº pessoa: ",i+1);
		scanf("%d",&v[i]);
	}
	
}

void mostrar_vetor(int num[],int tam){
	for(int a=0;a<tam;a++){
		printf("%d ",num[a]);
	}
}

void selection_sort(int num[],int tam){
	int i,j,valor,aux;
	
	for(i=0;i<tam;i++){
		valor=i;
		for(j=(i+1);j<tam;j++){
			if(num[j]<num[valor]){
				valor=j;
			}
		}
		if(i!=valor){
			aux=num[i];
			num[i]=num[valor];
			num[valor]=aux;
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int n[tmax],p;
	
	preencher_vetor(n,tmax);
	
	selection_sort(n,tmax);
	
	printf("\n\nOrdem Crescente\n\n");
	
	mostrar_vetor(n,tmax);
	
	return 0;
}
