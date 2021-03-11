#include <stdio.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

int main(void) 
{
  struct student s[3];
  int i = 0, j;
  
  FILE *fin = fopen("data.txt", "r");
  while(!feof(fin))
  {
    fscanf(fin, "%[^#]#%[^#]#%f\n", s[i].name, s[i].major, &s[i].gpa);
    i++;
  }
  fclose(fin);
  
  for(j = 0; j<i; j++)
  {
    printf("%s - %s - %.2f\n",s[j].name, s[j].major, s[j].gpa);
  }

  FILE *fout = fopen("output.txt", "w");

  for(i -= 1; i>=0; i--)
  {
    fprintf(fout, "%s#%s#%.2f\n",s[i].name, s[i].major, s[i].gpa);
  }
  fclose(fout);
  
  return 0;
}