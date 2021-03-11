#include <stdio.h>
#include <string.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

void newStudent(struct student *s, char sName[], char sMajor[], float sGpa)
{
  strcpy((*s).name, sName);
  strcpy(s->major, sMajor);
  s->gpa = sGpa;

}

int main(void) {
  struct student anthony;
  
  newStudent(&anthony,"Anthony", "Informatics", 3.99);

  printf("Name\t: %s\n", anthony.name);
  printf("Major\t: %s\n", anthony.major);
  printf("GPA\t\t: %.2f\n", anthony.gpa);

  return 0;
}