#include <stdio.h>
 
int main(void)
{
   const char *text = "Test text";        // Some text

   FILE *fp;                              

   fp = fopen ("File.txt", "w");          // Create and open file with name "File.txt"
   
   if (fp == NULL)                        // Error if file not created
   {
      printf("Error opening file!\n");
      return 1;
   }
   
   fprintf (fp, "Text: %s\n", text);      // Write string to file "File.txt" using fprintf 
   fputs (text, fp);                      // Write string to file "File.txt" using fputs

   fputc ('\n', fp);                      // Added new line
   fputc ('A', fp);                       // Added one character using fputc

   fclose (fp);                           // Close a file "File.txt"

} 
