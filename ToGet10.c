#include<stdio.h>
void toget10()
{
    printf("Enter the no. of previous assignments: ");
    int i,x,marks[10],s=0,avg,c;
    scanf("%d",&x);
    printf("Enter the grade(out of 10) of the assignments: ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&marks[i]);
       s=s+marks[i];


    }
    c=0;
    while(avg<9.5)
    {
        s=s+10;
        x++;
        c++;
        avg=s/x;
    }
    printf("The minimum no. of future assignments required is: ");
    printf("%d",&c);
    printf("Your avg grade is: ");
    printf("%d",&avg)

}

int main()
{
    toget10();
    return(1);
}
