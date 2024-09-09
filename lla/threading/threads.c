#include <pthread.h>
#include <stdio.h>
#include <time.h>

#define THREAD_COUNT 10

typedef struct {
  int arg1;
  short arg2;
} thread_arg_t;

void *thread_target(void *vargs) {
  thread_arg_t *args = (thread_arg_t *)vargs;
  printf("I am a thread, and %d\n", args->arg1);
}

int main(int argc, char *argv[]) {

  pthread_t threads[THREAD_COUNT];

  thread_arg_t myargs;

  int i = 0;
  for (i = 0; i < THREAD_COUNT; i++) {
    myargs.arg1 = i;
    if (pthread_create(&threads[i], NULL, thread_target, (void *)&myargs)) {
      return -1;
    }
  }

  for (i = 0; i < THREAD_COUNT; i++) {
    pthread_join(threads[i], NULL);
  }
  return 0;
}
