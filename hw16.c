#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <time.h>

int main(){
    printf("Sup Mother Forker :)\n");
    int forker = fork();
    int forker2;
    if(forker){
        forker2 = fork();
    }
    if(forker && forker2){
        int status;
        int pid = wait(&status);
        printf("forker %d finished, took %d seconds\n", pid, WEXITSTATUS(status));
        return 0;
    }

    srand(getpid());
    int sleep_time = (rand() % 4) + 2;
    sleep(sleep_time);
    printf("Forker finished sleepin for %d secs\n", sleep_time);
    return sleep_time;
}
