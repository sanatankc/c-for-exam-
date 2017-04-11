#include <stdio.h>

int main()
{
	int matrix_a[10][10], matrix_b[10][10], row, column;
	printf("Enter rows and colums of matrix.(seperated by spaces)\n");
	scanf("%d%d", &row, &column);

	// Ask User elements of first matrix and stores it in matrix_a
	printf("Enter elements of first matrix.\n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			scanf("%d", &matrix_a[i][j]);
		}
	}

	// Ask User elements of first matrix and stores it in matrix_b
	printf("Enter elements of second matrix.\n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			scanf("%d", &matrix_b[i][j]);
		}
	}

	// print addition of first and second matrix
	printf("Sum of entered matrix is: \n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			printf("%d ", matrix_a[i][j] + matrix_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}