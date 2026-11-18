# include <stdio.h>

int main()
{
	FILE *fp;
	char studentName[50], readName[50];
	float obtainedMarks, totalMarks, percentage;
	float readObtained, readTotal, readPercentage;

	printf("This is a program written in C to practise file handling (Student Result Management System)");

	printf("\n\nEnter the name of the student (without spaces): ");
	scanf("%s", studentName);
	printf("\nEnter the obtained marks: ");
	scanf("%f", &obtainedMarks);
	printf("\nEnter the total marks: ");
	scanf("%f", &totalMarks);

	percentage = (obtainedMarks / totalMarks) * 100;

	fp = fopen("student.txt", "w");
	fprintf(fp, "%s %.2f %.2f %.2f", studentName, obtainedMarks, totalMarks, percentage);
	fclose(fp);
	printf("\nThe information is stored in student.txt");

	fp = fopen("student.txt", "r");
	fscanf(fp, "%s %f %f %f", readName, &readObtained, &readTotal, &readPercentage);
	fclose(fp);

	printf("\n\n----- Information read from the file -----");
	printf("\nName: %s", readName);
	printf("\nObtained marks: %.2f", readObtained);
	printf("\nTotal marks: %.2f", readTotal);
	printf("\nPercentage: %.2f%%", readPercentage);

	return 0;
}
