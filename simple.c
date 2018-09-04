#include "omp.h"
#include<stdio.h>

int main()
{
#pragma omp parallel
{
int id=omp_get_thread_num();
printf("Hello WOrld,%d\n",id);
printf("Hello World,%d\n",id);
}

return 0;
}
