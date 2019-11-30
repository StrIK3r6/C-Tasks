#include<stdio.h>
int a,b,c,grt,points=0,n,i;

void main()
{


printf("Enter three no.s: \n");
scanf("%d %d %d",&a, &b, &c);

printf("\nEnter the no. of times the game should repeat: ");
scanf("%d",&n);

for(i=n;i>0;i--)
{
 int great=grt_of_three(a,b,c);
 points+=grt;

}
printf("The total points aquired by u is:points%d\n",points);


}


int grt_of_three(int a,int b,int c)
{
 if((a>b)&&(a>c))
 {
 grt=a;
 a-=1;
 }
 else if(b>c)
 {
  grt=b;
  b-=1;
 }
 else
 {
  grt=c;
  c-=1;
 }
 return(grt);
}
