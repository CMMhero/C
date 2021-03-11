#include <stdio.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

int main() 
{
  struct student anthony = {"Anthony", "Informatics", 3.99};
  struct student *anthonyPtr;

  anthonyPtr = &anthony;

  printf("Name\t: %s\n", (*anthonyPtr).name);
  printf("Major\t: %s\n", (*anthonyPtr).major);
  printf("GPA\t\t: %.2f\n", (*anthonyPtr).gpa);

  return 0;
}