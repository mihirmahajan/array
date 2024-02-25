//accept 5 elements and total and average//
#include<stdio.h>
int main()
{
    int arrnum[5],i,total,avg;
    printf("enter 5 elements :\n\n");
    for ( i = 0; i < 5; i++)    
    {
        printf("\n[%d]: ", i );
        scanf("%d", &arrnum[i]);
        total= total + arrnum[i];
    }
    avg= total/5;
    printf("total = %d\n\n",total);
    printf("average is: %d\n\n",avg);
    printf("\n\n");
    return 0;
    

}