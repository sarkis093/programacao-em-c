#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void frase(char *frase) {
	printf("%s \n", frase);
}

int main(int argc, char *argv[]){

	if (argc > 3) { 

		void *variavel = malloc( sizeof((void *) argv[3]) );
		variavel = argv[3];
		printf("%s\n", (char *)variavel);
		void free(void *variavel);

		int x = argc -1;
		for (int y=1; y <= x; y++) {
			frase(argv[y]);
		}
	}

	if (strcmp(argv[1], argv[2]) == -1) { 
		return -1; 
	} else { 
		printf("são iguais\n");
	}

	write(1, argv[0], sizeof(argv[0])+1);
	printf("\n");
	return 0;
}
