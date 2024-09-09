#include <pthread.h>
#include <stdio.h>

#define THREAD_COUNT 10

int counter = 0;
pthread_mutex_t counter_lock = PTHREAD_MUTEX_INITIALIZER;

void *thread_target(void *vargs) {
  // critical section
  // we need to make sure data is only being worked on by one thread at a time

  // this can lead to performance issues because the other threads that don't
  // have the mutex are in starvation
  pthread_mutex_lock(&counter_lock);

  for (int i = 0; i < 100000; i++) {
    counter += 1;
  }

  pthread_mutex_unlock(&counter_lock);

  printf("Conter is %d\n", counter);
}

int main(int argc, char *argv[]) {
  pthread_t threads[THREAD_COUNT];

  pthread_mutex_init(&counter_lock, NULL);

  int i = 0;

  for (i = 0; i < THREAD_COUNT; i++) {
    if (pthread_create(&threads[i], NULL, thread_target, NULL)) {
      return -1;
    }
  }

  for (i = 0; i < THREAD_COUNT; i++) {
    pthread_join(threads[i], NULL);
  }

  return 0;
}
