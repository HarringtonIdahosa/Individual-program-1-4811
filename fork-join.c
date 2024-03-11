#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include "common_threads.h"

sem_t s; 

void *child(void *arg) {
    printf("child\n");
    // Signal that the child has finished
    Sem_post(&s);
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p;

    // Initialize semaphore with value 0
    Sem_init(&s, 0);

    printf("parent: begin\n");
    
    // Create child thread
    Pthread_create(&p, NULL, child, NULL);

    // Wait for the child to finish
    Sem_wait(&s);

    printf("parent: end\n");

    return 0;
}
