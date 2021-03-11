#include <stdio.h>
#include <string.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

int main() {
  int i;
  struct student s[3];
  
  for(i=0; i<3; i++)
  {
    scanf("%[^#]#%[^#]#%f",s[i].name, s[i].major, &s[i].gpa);
    fflush(stdin);
    printf("%s\t%s\t%.2f\n", s[i].name, s[i].major, s[i].gpa);
  }

  printf("\n");
  for(i=0; i<3; i++)
  {
    printf("%s\t%s\t%.2f\n", s[i].name, s[i].major, s[i].gpa);
  }

  return 0;
}