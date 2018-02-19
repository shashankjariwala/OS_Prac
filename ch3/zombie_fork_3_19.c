#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

void child_func(void);
void parent_func(void);

void main()
{
    printf("Inside prog");
    pid_t pid = fork();


    if(pid == -1)
    {
        fprintf(stderr,"Error in process creation");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        child_func();
    }
    else
    {
        parent_func();
        printf("Exiting parent\n");
    }

}

void child_func(void)
{
    /*printf("Inside child\n");
    int cntr,seconds = 30;
    cntr = seconds*CLOCKS_PER_SEC;
    printf("%d\n",cntr);
    while(cntr > 0)
    {
        cntr--;
    }*/
    printf("Inside child\n");
    exit(0);
    printf("Inside child after sleep\n");
}

void parent_func(void)
{

    sleep(20);
}
