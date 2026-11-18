# include <stdio.h>
# include <string.h>

int main()
{
	char name[50], copiedName[100];
	int nameLength;

	printf("This is a program written in C to practise strings (Student Information System)");

	printf("\n\nEnter the full name of the student: ");
	scanf(" %[^\n]", name);

	nameLength = strlen(name);
	strcpy(copiedName, name);
	strcat(copiedName, " - FAST University");

	printf("\nOriginal name: %s", name);
	printf("\nLength of the name: %d", nameLength);
	printf("\nModified name: %s", copiedName);

	return 0;
}
