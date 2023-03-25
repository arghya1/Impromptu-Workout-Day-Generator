// This is a Impromptu Workout Day Number Generator For Gabriel Varga Workouts
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int n;
//Using rand() and srand() function to generate day number

srand (time(NULL));
n=rand()%31 + 1;

printf("Today We Will do Impromptu Workout for Day:");
printf("\t%d", n);

return 0;
}
