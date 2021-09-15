 #include<stdio.h>
 #include<time.h>
 
  int fib(int);  

  int main()
{
     int n;
    clock_t begin,end; 
    printf("Enter the number of elements in the fibonacci series: ");
    scanf("%d",&n);
    begin = clock();  //returns the begining clock tick
    printf("Fibonacci Series having %d elements: ",n);
    printf("%d %d ",0,1);
    fib(n-2);
    end = clock();     //return the ending clock tick
    end = end - begin; //returns the number of clock ticks taken to execute the function
    double time = ((double)end)/CLOCKS_PER_SEC;     //returns the number of seconds taken to execute the function
    printf("\n\n Time taken by the CPU to generate fibonacci series of %d elements is %f seconds",n,time);
    return 0;
 }

   int fib(int n) //Recursive function to generate fibonacci series
 {
    static double a=0,b=1,c;
    if(n>0)
	{
         c = a + b;
         a = b;
         b = c;
         printf("%lf ",c);
         fib(n-1);
    }
    else if(n==0) { }
    else
     printf("The input value for n is invalid !!");
	 return 0;
 }

