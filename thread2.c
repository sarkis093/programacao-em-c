/*gcc thread.c -o thread -lpthread*/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t threads[2];

void *function(void *n){
  int * nn = (int *)n;
  printf("chamado: %d\n",*nn);
}

int main(void){
  int i;

  for(i=0; i<5; i++){
    pthread_create(&(threads[i]), NULL, function, &i);
  }
  for(i=0; i<5; i++){
    pthread_join(threads[i], NULL);
  }

}
