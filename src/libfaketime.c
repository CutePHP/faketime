#include<sys/time.h>

time_t time(time_t time_t)
{
    return 100000;
}

int gettimeofday (struct timeval *__restrict __tv,__timezone_ptr_t __tz)
{
    __tv->tv_sec = 1000001;
    __tv->tv_usec = 200001;
}