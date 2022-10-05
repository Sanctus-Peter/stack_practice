#include "main.h"

/* Initialise Global variables */
stack_t *tail = NULL; 
stack_t *head = NULL;
int mode = STACK;
int quit = 0;
char *arg = 0;

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	char *content;
	char **lines;

	if (argc != 2)
	{
		dprintf(2, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}

	content = read_file(argv[1]);
	lines = strtow(content, "\n");
	free(content);
	if (!lines)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	parse_instructions(lines);

	free_tokenized(lines);
	clear_memory();
	if (quit == EXIT_FAILURE)
		exit(EXIT_FAILURE);

	return (0);
}
