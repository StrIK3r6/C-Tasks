#include<stdio.h>
#include<conio.h>
#include<string.h>

char check[50][30],string[50];
int n,score[50],sum=0;

void main()
{

 printf("Enter the no. of keywords:\n ");
 scanf("%d",&n);
 getch();

 printf("\nEnter the keywords: \n");

 for(int k=0;k<n;k++)
 {
   fgetc("%s",&check[50][k]);
 }
 getch();


 for(int i=0;i<n;i++)
 {
   printf("\nEnter the score for each keyword: ");
   scanf("%s",&score[i]);
   getch();
 }

 printf("\n\nEnter a string: ");
 fgetc("%s",&string);
 getch();

 for(int a=0;a<n;a++)
 {
   if(strstr(string,check[50][x])!=NULL)
    {
        fgetc("%s",&check[50][x]);
        printf("%d",&score[50][x]);
        sum=sum+score[50][x];
        getch();
    }
 }

  print("%d",&sum);
  getch();
}







