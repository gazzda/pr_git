#include <stdio.h>

#define MAXCHAR   1000                    // Default number of bytes to read

int main(void)
{
   FILE *fp;                              
   char buff[MAXCHAR];
   
   fp = fopen ("File.txt", "r");          // Open and read file with name "File.txt"

   if (fp == NULL)                        // Error if file does not exist
   {
      printf("Error opening file!\n");    
      return 1;
   }   
   
   while (fgets(buff, 255, fp) != NULL)   // Read all elements from file 
      printf("%s", buff);                 // Print all elements from file
   
   fclose(fp);                            // Close a file

} 
