#include <stdio.h>
#include <string.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

void printStudent(struct student s)
{
  printf("Name\t: %s\n", s.name);
  printf("Major\t: %s\n", s.major);
  printf("GPA\t\t: %.2f\n", s.gpa);
}

int main() 
{
  struct student anthony = {"Anthony", "Informatics", 3.99};

  printStudent(anthony);

  return 0;
}