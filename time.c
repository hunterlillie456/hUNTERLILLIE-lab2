#include <sys/time.h>
#include <stdio.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.

    double result;
    double start;
    double end;
    //tv_sec = seconds | tv_usec = microseconds
    //TODO: translate start_time and end_time to seconds 

    start = (start_time->tv_sec*1000000.0) + start_time->tv_usec;
    printf("start = %f\n",start);

    end = (end_time->tv_sec*1000000.0) + end_time->tv_usec;
    printf("end = %f \n",end);

    result = (end - start)/1000000.0;

    return result;
}