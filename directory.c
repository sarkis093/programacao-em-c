#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

#ifndef MAX_BUF
#define MAX_BUF 200
#endif

int main(){

  char path[MAX_BUF];

  getcwd(path, MAX_BUF);
  printf("Current working directory is %s\n", path);

  return 0;
}
