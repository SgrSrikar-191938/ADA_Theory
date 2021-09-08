//C program to print the n elements of fibonacci series
#include<stdio.h>    
int main()    
{    
  int a=0,b=1,c,i,n;    
 printf("Enter the number of elements in the fibonacci series: ");    
 scanf("%d",&n);    
 printf(" %d\n %d\n",a,b); //Prints the first two elements in the series 0 and 1 respectively.     
 for(i=n;i>2;i--) //Loop prints the elements of fibonacci series excluding the first two elements.    
 {    
  c=a+b;    
  printf(" %d\n",c);    
  a=b;    
  b=c;    
 }  
  return 0;  
 }    
