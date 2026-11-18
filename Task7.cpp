# include <stdio.h>

int main()
{
	FILE *fp;
	int marksObtained, marksTotal, newObtained, newTotal;

	printf("This is a program written in C to practise file handling (Student Record Update)");

	//creating marks.txt with an existing record
	fp = fopen("marks.txt", "w");
	fprintf(fp, "%3d %3d", 70, 100);
	fclose(fp);

	fp = fopen("marks.txt", "r+");
	fscanf(fp, "%d %d", &marksObtained, &marksTotal);
	printf("\n\nExisting marks: %d out of %d", marksObtained, marksTotal);

	printf("\n\nEnter the updated obtained marks: ");
	scanf("%d", &newObtained);
	printf("\nEnter the updated total marks: ");
	scanf("%d", &newTotal);

	rewind(fp);
	fprintf(fp, "%3d %3d", newObtained, newTotal);
	fclose(fp);
	printf("\nThe record is updated in marks.txt");

	fp = fopen("marks.txt", "r");
	fscanf(fp, "%d %d", &marksObtained, &marksTotal);
	fclose(fp);
	printf("\n\nUpdated marks: %d out of %d", marksObtained, marksTotal);

	return 0;
}
