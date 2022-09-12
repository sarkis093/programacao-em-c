#include<unistd.h>
#include<stdio.h>

int main(int argc, char **argv){
	execl("/bin/ls", "-la", argv[1], NULL);
}