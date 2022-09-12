#include<stdio.h>

int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[1], "rb");
	unsigned char byte;

	while(fread(&byte, sizeof(byte), 1, file)){
		printf("%c", byte);
	}

	puts("\n");
	fclose(file);

	return 0;
}
