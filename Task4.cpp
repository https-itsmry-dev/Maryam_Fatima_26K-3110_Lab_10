# include <stdio.h>
# include <string.h>

int main()
{
	char students[5][50], firstStudent[50];
	char searchLetter;
	int i, nameLength;

	printf("This is a program written in C to practise 2D character arrays (Student Names Management)");

	for (i = 0; i < 5; i++)
	{
		printf("\n\nEnter the name of student %d: ", i + 1);
		scanf(" %[^\n]", students[i]);
	}

	printf("\n\n----- Entered Names -----");
	for (i = 0; i < 5; i++)
	{
		printf("\nStudent %d: %s", i + 1, students[i]);
	}

	printf("\n\n----- Length of each name -----");
	for (i = 0; i < 5; i++)
	{
		nameLength = strlen(students[i]);
		printf("\nLength of %s: %d", students[i], nameLength);
	}

	strcpy(firstStudent, students[0]);
	printf("\n\nCopied name of the first student: %s", firstStudent);

	printf("\n\nEnter the character to search in the names: ");
	scanf(" %c", &searchLetter);

	for (i = 0; i < 5; i++)
	{
		if (strchr(students[i], searchLetter) != NULL)
		{
			printf("\nThe character '%c' is found in %s", searchLetter, students[i]);
		}
		else
		{
			printf("\nThe character '%c' is not found in %s", searchLetter, students[i]);
		}
	}

	return 0;
}
