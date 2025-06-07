// Zombie Process
// Child becomes Zombie as parent is sleeping
// when child process exits
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    // Fork returns process id
    // in parent process
    pid_t child_pid = fork();

    // Parent process
    if (child_pid > 0)
        sleep(100); // Sleep for 10 seconds, dont allow to call wait()

    // Child process
    else
        exit(0);

    return 0;
    // to see the zombie process, run the command:
    // top
}