#include <stdio.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

int main(void) 
{
  struct student s;
  FILE *fin = fopen("data.txt", "r");
  fscanf(fin, "%[^#]#%[^#]#%f\n", s.name, s.major, &s.gpa);
  fclose(fin);

  printf("%s - %s - %.2f\n",s.name, s.major, s.gpa);

  FILE *fout = fopen("output.txt", "w");
  fprintf(fout, "Name: %s\n", s.name);
  fprintf(fout, "Major: %s\n", s.major);
  fprintf(fout, "GPA: %.2f\n", s.gpa);
  fclose(fout);
  
  return 0;
}