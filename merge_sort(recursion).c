//C program to implement Merge Sort recursively
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Function to merge the array elements
  int merge(int arr[], int l, int m, int r)
 {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
    //creating left and right temp arrays
	int L[n1], R[n2];
    // Copying data to temp arrays
	  for (i = 0; i < n1; i++)
		 L[i] = arr[l + i];
	  for (j = 0; j < n2; j++)
		 R[j] = arr[m + 1 + j];
	i = 0; 
	j = 0; 
	k = l; 
	   while (i < n1 && j < n2)
	  {
		  if (L[i] <= R[j]) 
	    {
			arr[k] = L[i];
			i++;
		}
		  else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	  }
	 while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	 while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
   return 0;
 }
//Function to implement merge sort recursively
  int mergeSort(int arr[], int l, int r)
 {
    if (l < r) //l -> left index;  r -> right index
   {
	  int m = l + (r - l) / 2;
	   mergeSort(arr, l, m); //recursive call to sort the first half of array elements
		mergeSort(arr, m + 1, r); //recursive call to sort the other half of array elements
		merge(arr, l, m, r); //function to merge the elements
	}
    return 0;
 } 
// Function to print the elements of an array
   int printArray(int arr[], int n)
 {
 	int i;
     for (i = 0; i < n; i++) 
       printf("%d\t ", arr[i]);
    printf("\n");
    return 0;
 }
 //Main function
   int main()
 {
	int arr[10000]; 
    int lower,upper,count,i,j;
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
   mergeSort(arr,0,count-1); //Calling function to implement merge sort 
   printf("Array of elements after merge sort are: \n");
   printArray(arr,count);
   end = clock(); //returns the ending clock tick
   end = end - begin; //returns the number of clock ticks taken to execute the function
   double time = ((double)end)/CLOCKS_PER_SEC;     //returns the number of seconds taken to execute the function
   printf("\n\n Time taken by the CPU to sort the %d elements using merge sort is %f seconds",count,time);
   return 0;
 }

