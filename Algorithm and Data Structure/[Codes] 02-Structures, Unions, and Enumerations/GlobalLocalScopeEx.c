#include <stdio.h>

struct student
{
  char name[50];
  char major[35];
  float gpa;
};

struct student yuggy = {"Yuggy", "Informatics", 3.57};

int main() 
{
  struct student anthony = {"Anthony", "Informatics", 3.99};
 
  printf("[Local] \tStudent 1\t: %s\n", anthony.name);
  printf("[Global] \tStudent 2\t: %s\n", yuggy.name);

  return 0;
}