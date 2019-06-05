#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_SIZE 64
#define FILE_NAME "persons.dat"

struct Person {
  int id;
  char first_name[MAX_SIZE];
  char last_name[MAX_SIZE];
  int age;

};

int main(int argc, char const *argv[])
{
  struct Person p;
  FILE* fd = fopen(FILE_NAME, "w");

  //fwrite("1", sizeof(struct Person), 1, fd);
  return 0;
}
