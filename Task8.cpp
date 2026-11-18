# include <stdio.h>

int main()
{
	FILE *fp;
	int studentID, readID;
	float obtainedMarks, totalMarks, percentage;
	float readObtained, readTotal, readPercentage;

	printf("This is a program written in C to practise file handling (Result Processing System)");

	fp = fopen("result.txt", "w+");

	printf("\n\nEnter the student ID: ");
	scanf("%d", &studentID);
	printf("\nEnter the obtained marks: ");
	scanf("%f", &obtainedMarks);
	printf("\nEnter the total marks: ");
	scanf("%f", &totalMarks);

	percentage = (obtainedMarks / totalMarks) * 100;

	fprintf(fp, "%d %.2f %.2f %.2f", studentID, obtainedMarks, totalMarks, percentage);
	rewind(fp);
	fscanf(fp, "%d %f %f %f", &readID, &readObtained, &readTotal, &readPercentage);

	printf("\n\n----- Information read from the file -----");
	printf("\nStudent ID: %d", readID);
	printf("\nObtained marks: %.2f", readObtained);
	printf("\nTotal marks: %.2f", readTotal);
	printf("\nPercentage: %.2f%%", readPercentage);

	fclose(fp);

	return 0;
}
