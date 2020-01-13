#include<stdio.h>
#include<sys/time.h>
time_t time(time_t time_t);
int main(int argc, char const *argv[])
{
    time_t time_t;
    time_t = time(0);
    printf("time:%ld\n", time_t);
    return 0;
}
