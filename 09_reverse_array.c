#include <stdio.h>

int reverse_array(int *arr, int size);

int main()
{
	int arr[50], size;
	printf("Enter length of the array: ");
	scanf("%d", &size);

	for (int i = 0; i < size; ++i)
	{
		printf("Enter element %d of array: ", i);
		scanf("%d", &arr[i]);
	}
	reverse_array(arr, size);

	for (int j = 0; j < size; ++j)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
	return 0;
}

int reverse_array(int *arr, int size){
	int temp_reverse_arr[50];

	for (int i = 0; i < size; ++i)
	{
		temp_reverse_arr[i] = arr[i];
	}

	for (int j = 0; j < size; ++j)
	{
		arr[j] = temp_reverse_arr[size - j - 1];
	}
	return 0;
}