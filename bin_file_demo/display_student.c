#include <stdio.h>
#include <stdlib.h>
#define len 64

int main(int argc, char const *argv[]) {
  char first_name[len];
  char last_name[len];
  int age;

  FILE* fd=fopen("person.dat","r");
  fseek(fd,sizeof(int)+atoi(argv[1])*(sizeof(first_name)+sizeof(last_name)+sizeof(age)+sizeof(int)),SEEK_SET);
  fseek(fd,sizeof(int),SEEK_CUR);
  fread(first_name,sizeof(first_name),1,fd);
  fread(last_name,sizeof(last_name),1,fd);
  fread(&age,sizeof(int),1,fd);
  printf("First Name: %s\n",first_name);
  printf("Last Name: %s\n",last_name);
  printf("Age: %d\n",age);
  fclose(fd);
  return 0;
}
