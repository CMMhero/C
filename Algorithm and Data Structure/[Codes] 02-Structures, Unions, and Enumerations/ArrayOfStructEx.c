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

  struct student s[3] = {{"Anthony", "Informatics", 3.99},
                         {"Yuggy", "Informatics", 3.57},
                         {"Eric", "Informatics", 3.78}};
  
  for(i=0; i<3; i++)
  {
    printf("%s\t%s\t%.2f\n", s[i].name, s[i].major, s[i].gpa);
  }

  return 0;
}