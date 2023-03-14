#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N_THREADS 100
int counter;
void * thread_code(void * arg) {
  counter = counter + 1;
  pthread_exit(0);
}
void start_threads() {
  int i;
  pthread_t threads[N_THREADS];
  counter = 0;
  for (i = 0; i < N_THREADS; i++) {
    pthread_create(&threads[i], NULL, thread_code, NULL);
  }
  for (i = 0; i < N_THREADS; i++) {
    pthread_join(threads[i], NULL);
  }
  printf("Counter value: %d\n", counter);
}

int main() {
  start_threads();
  return EXIT_SUCCESS;
}
