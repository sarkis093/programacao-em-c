#include<stdio.h>
int main(){
int x;
for(x=33; x<=127; x++){
	printf("%3d -> %c\n",x,(char)x);
	if(x%20==0)
		putchar('\n');
	else
		continue;
}
		
}