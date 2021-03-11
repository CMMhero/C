#include <stdio.h>
#include <string.h>

struct course
{
  char name[40];
  int sks;
  int assignment;
  int midExam;
  int finalExam;
  float score;
};

struct student
{
  char name[50];
  char major[35];
  float gpa;
  struct course algorithm, multimedia;
};

int main() {
  int i;
  struct student anthony = {"Anthony", "Informatics"};

  strcpy(anthony.algorithm.name, "Agorithm and Data Structure\n");
  anthony.algorithm.sks = 3;
  printf("%s\n", anthony.algorithm.name);
  printf("Assignment\t: ");
  scanf("%d", &anthony.algorithm.assignment);
  printf("Mid Exam\t: ");
  scanf("%d", &anthony.algorithm.midExam);
  printf("Final Exam\t: ");
  scanf("%d", &anthony.algorithm.finalExam);

  anthony.algorithm.score = 0.3*anthony.algorithm.assignment + 0.3*anthony.algorithm.midExam + 0.3*anthony.algorithm.finalExam;
  printf("Final Score\t: %.2f\n",anthony.algorithm.score);
  return 0;
}