#include <pthread.h>
#include <stdio.h>
#include <time.h>

#define THREAD_COUNT 10

void *thread_target() { printf("I am a thread\n"); }

int main(int argc, char *argv[]) {

  pthread_t threads[THREAD_COUNT];
  int i = 0;
  for (i = 0; i < THREAD_COUNT; i++) {
    if (pthread_create(&threads[i], NULL, thread_target, NULL)) {
      return -1;
    }
  }

  return 0;
}
