# include <stdio.h>
# include <string.h>

int main()
{
	char product1[50], product2[50];
	int length1, length2;

	printf("This is a program written in C to practise strings (Product Comparison System)");

	printf("\n\nEnter the first product name: ");
	scanf(" %[^\n]", product1);
	printf("\nEnter the second product name: ");
	scanf(" %[^\n]", product2);

	if (strcmp(product1, product2) == 0)
	{
		printf("\nThe product names are identical");
	}
	else
	{
		printf("\nThe product names are different");
	}

	length1 = strlen(product1);
	length2 = strlen(product2);
	printf("\nLength of %s: %d", product1, length1);
	printf("\nLength of %s: %d", product2, length2);

	return 0;
}
