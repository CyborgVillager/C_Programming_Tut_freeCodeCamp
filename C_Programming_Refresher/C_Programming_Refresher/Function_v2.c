#include <stdio.h>

#define MAXLINE 1000 /* Maximum length of input line */

// Function to read a line from input. Returns the length of the line read.
int getLine(char line[], int max);
// Function to search for a pattern in a string. Returns the starting index or -1 if not found.
int strindex(char source[], char searchfor[]);

// The pattern that we want to search for in each line.
char pattern[] = "ould";

/*
 * Main function: Reads lines of text from input and prints lines that contain the pattern.
 */
int main()
{
	// Informing the user about the purpose of this program.
	printf("NOTE: This program is a demonstration. Do not expect data to be shown. \n View it as a placeholder for code");

	char line[MAXLINE];
	int found = 0;

	// Loop until there are no more lines to read.
	while (getLine(line, MAXLINE) > 0)
		// If the pattern is found in the line, print the line.
		if (strindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	// Return the count of lines that contained the pattern.
	return found;
}

/*
 * getLine: Reads a line from standard input.
 * s: The character array to store the line.
 * lim: The maximum length of the line to read.
 * Returns: The length of the line read.
 */
int getLine(char s[], int lim)
{
	int c, i;
	i = 0;

	// Read characters until the end of the file, newline or maximum limit.
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	// If a newline is read, add it to the string.
	if (c == '\n')
		s[i++] = c;
	// Null-terminate the string.
	s[i] = '\0';

	return i;
}

/*
 * strindex: Searches for the pattern t in string s.
 * s: The source string to search in.
 * t: The pattern string to search for.
 * Returns: The starting index of the first occurrence of t in s or -1 if not found.
 */
int strindex(char s[], char t[])
{
	int i, j, k;

	// Iterate over the source string s.
	for (i = 0; s[i] != '\0'; i++) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
		// If the pattern t is found in s, return the starting index.
		if (k > 0 && t[k] == '\0')
			return i;
	}
	// Pattern not found.
	return -1;
}
