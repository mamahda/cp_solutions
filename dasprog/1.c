#include <stdio.h>
#include <string.h>

int inNum(int num);
int outNum();
void seeTable();

int table[105];
int size = 0;

int main(){
  char cmd[20];
  while(scanf("%s", cmd) != EOF){
    if(strcmp(cmd, "IN") == 0){
      int num;
      scanf("%d", &num);
      inNum(num);
    }
    else if(strcmp(cmd, "OUT") == 0){
      outNum();
    }
    else if(strcmp(cmd, "SEE") == 0){
      seeTable();
    }
  }
}

int inNum(int num){
  if(size >= 100){
    printf("FULL\n");
    return 1;
  }
  table[++size] = num;
  printf("OK\n");
  return 1;
}

int outNum(){
  if(size == 0){
    printf("EMPTY\n");
    return 0;
  }
  printf("REMOVED %d\n", table[size--]);
  return 0;
}

void seeTable(){
  if(size == 0){
    printf("EMPTY\n");
  }
  for(int i = 1; i <= size; i++){
    printf("%d ", table[i]);
  }
  printf("\n");
}
