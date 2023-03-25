// This is a Random Number Generator Program
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
//Using rand() function to generate random number
printf("Random Number you can use between 1-31:");
/* int i //declare in the first
for (i=1; i<=31; i++)
{
	n = rand()%31 + 1;
	printf("\t%d", n);
}
*/
n=rand()%31 + 1;
printf("\t%d", n);

return 0;
}
