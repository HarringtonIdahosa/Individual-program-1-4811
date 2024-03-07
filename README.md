# Individual-program-2-4811

## fork-join.c

### Overview
This program demonstrates a simple fork-join pattern using pthreads and semaphores. The main thread creates a child thread, and the parent thread waits for the child to finish using a semaphore.

### Instructions to Run
- Compile the code using the provided makefile: `make output`.
- Run the executable: `./output`.

OR

- Compile the code manually: `gcc -o output fork-join.c`.
- Run the executable: `./output`.

---

## rendezvous.c

### Overview
This program illustrates a rendezvous pattern using pthreads and semaphores. Two child threads synchronize at a rendezvous point, ensuring they both reach a certain point in the execution before proceeding.

### Instructions to Run
- Compile the code using the provided makefile: `make output2`.
- Run the executable: `./output2`.

OR

- Compile the code manually: `gcc -o output2 rendezvous.c `.
- Run the executable: `./output2`.

---

## barrier.c

### Overview
This code implements a barrier synchronization mechanism using semaphores. Multiple threads are created, and they must all reach a common point before any of them proceed. Adjustments for better understanding can be made by adding sleep calls in various locations.

### Instructions to Run
- Compile the code using the provided makefile: `make output3`.
- Run the executable with the desired number of threads: `./output3 <num_threads>`.

OR

- Compile the code manually: `gcc -o output3 barrier.c`.
- Run the executable with the desired number of threads: `./output3 <num_threads>`.

**Example:**
`./output3 4`
