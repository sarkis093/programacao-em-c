#include<stdio.h>

int main(void){

int vet [] = {1,2,3,4,5};
int vet2[] = {6,7,8,9,10};
int tot[10];

for(int i=0; i<=9; i++){
	tot[i] = vet[i];
	printf("%d",tot[i] );
	if(tot[i] == 5){
		printf("\n");
		for(int y=0; y<=5; y++){ 
			tot[i] = vet2[y];	
			printf("%d", tot[i]);

			if(tot[i]==10){
				printf("\n");
				return 0;
			}
		}
	}
	
    }
}
