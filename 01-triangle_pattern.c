#include <stdio.h>

void print_it_n_times(char *chr, int times);

int main()
{
	int height;
	printf("Enter triange height: ");
	scanf("%d", &height);
	
	for (int i = 1; i <= height; ++i)
	{
		print_it_n_times("*", i);
		printf("\n");	
	}

	return 0;
}

void print_it_n_times(char *chr, int times){
	for (int i = 0; i < times; ++i)
	{
		printf("%c", *chr);
	}
}