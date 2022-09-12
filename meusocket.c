#include<stdio.h>
#include<asm/socket.h>
//#include<strings.h>
#include<netdb.h>//socket
#include<stdlib.h>//perror
#include<unistd.h>//close
#include<arpa/inet.h>//funciona!!
int main(int argc, char *argv[]){

	int mysocket;
	int connection;
	char * argumento;
	argumento = argv[1];
	int inicio = 1;
	int final = 65535;
	struct sockaddr_in target;

for(inicio; inicio<final; inicio++){
	mysocket = socket(AF_INET, SOCK_STREAM, 0);
	if(mysocket == -1){
		perror("Erro ao conectar\n");
		return EXIT_FAILURE;
	}
	target.sin_family = AF_INET;
	target.sin_port = htons(inicio);
	target.sin_addr.s_addr = inet_addr(argumento);

	connection = connect(mysocket, (struct target *)&target, sizeof(target));

	if (connection == 0)
	{
		printf("Porta aberta: %d\n",inicio);
		close(mysocket);
		close(connection);
	}
	else{
		close(mysocket);
		close(connection);
	}
	
}

}
