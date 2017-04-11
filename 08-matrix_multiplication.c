#include <stdio.h>

int main()
{
	int matrix_a[10][10], matrix_b[10][10], row_a, column_a, row_b, column_b;
	printf("Enter rows and colums of first matrix.(seperated by spaces)\n");
	scanf("%d%d", &row_a, &column_a);

	// Ask User elements of first matrix and stores it in matrix_a
	printf("Enter elements of first matrix.\n");
	for (int i = 0; i < row_a; ++i)
	{

		for (int j = 0; j < column_a; ++j)
		{
			scanf("%d", &matrix_a[i][j]);
		}
		printf("\n");
	}

	printf("Enter rows and colums of first matrix.(seperated by spaces)\n");
	scanf("%d%d", &row_b, &column_b);

	if (column_a != row_b){
		printf("Dimesion Error: Wrong dimensions of matrix entered\n");
		return 1;
	}

	// Ask User elements of first matrix and stores it in matrix_b
	printf("Enter elements of second matrix.\n");
	for (int i = 0; i < row_b; ++i)
	{
		for (int j = 0; j < column_b; ++j)
		{
			scanf("%d", &matrix_b[i][j]);
		}
		printf("\n");
	}

	// print addition of first and second matrix
	printf("Multiplication of entered matrix is: \n");
	for (int i = 0; i < row_a; ++i)
	{
		for (int k = 0; k < column_b; ++k)
		{
			int sum = 0;
			for (int j = 0; j < column_a; ++j)
			{
				sum+= matrix_a[i][j] * matrix_b[j][k];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}