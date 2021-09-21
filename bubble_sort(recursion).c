//C program to implement bubble sort recursively
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
// Function to swap two elements in an array
  int swap(int arr[], int i, int j)
 {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   return 0;
 } 
// Function to print the elements of an array
  int printArray(int arr[], int count)
 {
 	int i;
     for(i=0; i<count; i++)
	 { 
        printf("%d\t ", arr[i]);
     }
	 printf("\n");
	 return 0;
 }
// Recursive function to implement bubble sort
  int bubbleSort(int arr[], int count)
 {  
    int i;
     for (i = 0; i < count - 1; i++)
    {
        if (arr[i] > arr[i + 1]) 
       {  
	        swap(arr, i, i + 1);
       }
    }  
     if (count - 1 > 1) 
	{
        bubbleSort(arr, count-1); //Recursive call
    }
     return 0;
 }
//Main function
 int main()
{
   int lower, upper, count, i, j, temp;
   int arr[10000];
   clock_t begin,end;
   printf("Enter the values for lower, upper and count \n");
   scanf("%d%d%d",&lower,&upper,&count);
   srand(time(0));
 //Generation of random numbers 
   printf("The given elements are: \n");
    for(i=0;i<count;i++)
   {
 	 arr[i] = (rand()%(upper-lower+1))+lower;
     printf("%d\t",arr[i]);
   }
   printf("\n");
   begin=clock(); //returns the begining clock tick
   bubbleSort(arr, count); 
	printf("Array of elements after bubble sort are: \n");
	printArray(arr, count);
   end = clock(); //return the ending clock tick
   end = end - begin; //returns the number of clock ticks taken to execute the function
   double time = ((double)end)/CLOCKS_PER_SEC;     //returns the number of seconds taken to execute the function
   printf("\n\n Time taken by the CPU to sort the %d elements using bubble sort is %f seconds",count,time);
   return 0;
}
