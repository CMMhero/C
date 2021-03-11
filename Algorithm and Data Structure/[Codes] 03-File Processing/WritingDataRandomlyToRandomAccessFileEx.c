#include <stdio.h>
#include <string.h>

int main() 
{ 
  FILE *fp;
  char str[30] = "Programming Fundamentals";
  

  fp = fopen("file.txt","w"); 
  //printf("%lu\n",sizeof(str));
  fwrite(str,  sizeof(str), 1, fp);
  fclose(fp); 
  fseek(fp, 7, SEEK_SET); 

  strcpy(str,"Algorithm and Data Structures");
  printf("%lu\n",sizeof(str));
  fwrite(str, sizeof(str), 1, fp);

  fclose(fp); 
  return(0); 
}
