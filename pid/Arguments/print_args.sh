# print_args
#!/bin/bash
# Iterate through command-line arguments and print each one
for arg in "$@"; do 
    printf "%s " "$arg"

done 

# print a newline at the end 

printf "\n"

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;
    size_t len = 0;

    while (1) {
        printf("$ ");
        fflush(stdout);  // Ensure the prompt is printed

        // Read a line from standard input
        ssize_t read = getline(&line, &len, stdin);

        // Check for end-of-file (Ctrl+D)
        if (read == -1) {
            break;
        }

        // Print the entered command
        printf("%s", line);
    }

    // Free allocated memory for getline
    free(line);

    return 0;
}
