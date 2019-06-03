#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_SIZE 64
#define FILE_NAME "persons.dat"
#define CACHE_SIZE 10

struct Person {
  int id;
  char first_name[MAX_SIZE];
  char last_name[MAX_SIZE];
  int age;

};
struct Person get_at_pos(struct Person p[CACHE_SIZE], int id);
void set_ID_auto(struct Person p[CACHE_SIZE]);
int main(int argc, char const *argv[]) {
  FILE* fd = fopen(FILE_NAME, "r");
  struct Person p[CACHE_SIZE];

  int n = fread(p, sizeof(struct Person), CACHE_SIZE, fd);

  printf("%d items read\n", n);
  set_ID_auto(p);
  for (int i = 0; i < CACHE_SIZE; i++) {
    printf(" %s %s %d\n", /*p[i].id,*/ p[i].first_name, p[i].last_name, p[i].age);
  }

  /*int idTemp;
  printf("Enter your id: ");
  scanf("%d", idTemp);
  struct Person p_at_id = get_at_pos(p,&idTemp);
  printf("%d %s %s %d\n", p_at_id.id, p_at_id.first_name, p_at_id.last_name, p_at_id.age);*/
  // while (n > 0) {
  //   printf("%s %s %d\n", p.first_name, p.last_name, p.age);
  //   n = fread(&p, sizeof(struct Person), 1, fd);
  // }
  return 0;
}


void set_ID_auto(struct Person p[CACHE_SIZE])
{


   for (int y = 0; y < CACHE_SIZE; y++)
   {
     p[y].id = y+1;
   }

}

struct Person get_at_pos(struct Person p[CACHE_SIZE], int id)
{

  return p[id];

}
