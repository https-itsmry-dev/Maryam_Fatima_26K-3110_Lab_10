# include <stdio.h>

int main()
{
	FILE *fp;
	int accountNumber, readAccountNumber;
	float transaction1, transaction2, readTransaction1, readTransaction2;

	printf("This is a program written in C to practise file handling (Bank Transaction Record)");

	printf("\n\nEnter the account number: ");
	scanf("%d", &accountNumber);
	printf("\nEnter the first transaction amount: ");
	scanf("%f", &transaction1);

	fp = fopen("bank.txt", "w");
	fprintf(fp, "%d %.2f\n", accountNumber, transaction1);
	fclose(fp);
	printf("\nThe first record is stored in bank.txt");

	printf("\n\nEnter the second transaction amount: ");
	scanf("%f", &transaction2);

	fp = fopen("bank.txt", "a");
	fprintf(fp, "%.2f\n", transaction2);
	fclose(fp);
	printf("\nThe second transaction is added to bank.txt");

	fp = fopen("bank.txt", "r");
	fscanf(fp, "%d %f", &readAccountNumber, &readTransaction1);
	fscanf(fp, "%f", &readTransaction2);
	fclose(fp);

	printf("\n\n----- Transaction records read from the file -----");
	printf("\nAccount number: %d", readAccountNumber);
	printf("\nFirst transaction: %.2f", readTransaction1);
	printf("\nSecond transaction: %.2f", readTransaction2);

	return 0;
}
