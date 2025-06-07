#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    __pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        // Child process
        printf("Child process with PID: %d, Parent process with pid %d \n", getpid(), getpid());
    }
    else
    {
        // printf("Parent process with PID: %d, Child process with pid %d\n", getpid(), pid);
        // Parent process
        // Wait for child process to finish
        int status;
        wait(&status);
        printf("Parent process with PID: %d, Child process with pid %d\n", getpid(), pid);
    }
}