#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t *s;  // Use a pointer for the semaphore

void *child(void *arg) {
    printf("child\n");
    // Signal that the child has finished
    sem_post(s);
    return NULL;
}

int main(int argc, char *argv[]) {
    pthread_t p;

    // Create a named semaphore
    s = sem_open("/my_semaphore", O_CREAT, 0644, 0);

    if (s == SEM_FAILED) {
        perror("sem_open");
        return 1;
    }

    printf("parent: begin\n");

    // Create child thread
    pthread_create(&p, NULL, child, NULL);

    // Wait for the child to finish
    sem_wait(s);

    printf("parent: end\n");

    // Close and unlink the semaphore
    sem_close(s);
    sem_unlink("/my_semaphore");

    return 0;
}

