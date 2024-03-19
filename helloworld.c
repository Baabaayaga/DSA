#include <stdio.h>
main()
{
   FILE *fp;
   fp = fopen("file.txt", "w");//opening file
   fprintf(fp, "Hello world\n");//writing data into file
   fclose(fp);//closing file
}
