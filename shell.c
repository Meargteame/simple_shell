#include "shell.h"
#include <unistd.h>

#define MAX_LINE_LENGTH 1024

int main(int ac, char **argv) {
  char *prompt = "(Eshell) $ ";
  char lineptr[MAX_LINE_LENGTH];
  
  /* declaring void variables */
  (void)ac; (void)argv;

  write(STDOUT_FILENO, prompt, strlen(prompt));

  if (fgets(lineptr, sizeof(lineptr), stdin) == NULL) {
    perror("Error reading input");
    return 1;
  }

  write(STDOUT_FILENO, lineptr, strlen(lineptr));

  return 0;
}

