#include <stdio.h>

int largest(int *arr, int size);
int smallest(int *arr, int size);

int main()
{
	int size_of_arr, arr[50];
	printf("Enter size of array: ");
	scanf("%d", &size_of_arr);
	
	// Loop through array and takes inputand store in array 
	for (int i = 0; i < size_of_arr; ++i)
	{
		printf("Enter element %d of array: ", i);
		scanf("%d", &arr[i]);
	}
	printf("largest number of array is:- %d\n", largest(arr, size_of_arr));
	printf("smallest number of array is:- %d\n", smallest(arr, size_of_arr));

}


int largest(int *arr, int size){
	/*Loops through and returns
	largest number in list.*/
	int largest;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == 0){
			largest = arr[i];
		}
		else if (arr[i] > largest){
			largest = arr[i];
		}
	}
	return largest;
}

int smallest(int *arr, int size){
	/*Loops through and returns 
	  largest */
	int smallest;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == 0){
			smallest = arr[i];
		}
		else if (arr[i] < smallest){
			smallest = arr[i];
		}
	}
	return smallest;
	
}