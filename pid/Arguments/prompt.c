#include <stdio.h>
#include <unistd.h>

int  main()
{
  char *line =NULL;
  size_t len =0;

  while (1){
    printf("$");
    fflush(stdout); // this ensures that the prompt is entered 

    // Read a line from the the standard input
      ssize_t read = getline(&line , &len ,stdin);


      //check for end of file 
      if (read == -1)
      {
        break;
      }
// print the entered command 
      printf("%s", line);
//  free the allocated memmory for getline 

free(line);


  }


  
  return (0);

}