# include <stdio.h>
# include <string.h>

int main()
{
	char sentence[100], copiedSentence[100];
	char searchChar;
	char *found;
	int position;

	printf("This is a program written in C to practise strings (Character Search System)");

	printf("\n\nEnter a sentence: ");
	scanf(" %[^\n]", sentence);
	printf("\nEnter the character to search: ");
	scanf(" %c", &searchChar);

	found = strchr(sentence, searchChar);

	if (found != NULL)
	{
		position = found - sentence + 1;	//position starting from 1
		printf("\nThe character '%c' is found at position %d", searchChar, position);
	}
	else
	{
		printf("\nThe character '%c' is not found in the sentence", searchChar);
	}

	strcpy(copiedSentence, sentence);
	printf("\nCopied sentence: %s", copiedSentence);

	return 0;
}
