#include<stdio.h>
#include<netdb.h>

int main(){

	int mysocket;
	int connection;

	struct sockaddr_in target;

	mysocket = socket(AF_INET, SOCK_STREAM, 0);	
	target.sin_family = AF_INET;
	target.sin_port = htons(80);
	target.sin_addr.s_addr = inet_addr("192.168.0.1");

	connection = connect(mysocket, (struct target *)&target, sizeof target);

	if (connection == 0)
	{
		printf("Porta aberta\n");
		close(mysocket);
		close(connection);
	}else{
		printf("Porta fechada\n");
	}

}
