typedef struct {
  int data[1001];
  int top;
} stack;

void init(stack *s){
  s->top = -1;
}

void push(stack *s, int angka){
  s->top++;
  s->data[s->top] = angka; 
}

void pop(stack *s){
  s->top--;
}
void printStack(stack *s) {
  for (int i = s->top; i >= 0; i--) {
    printf("%d ", s->data[i]);
  }
  printf("\n");
}

int calPoints(char** operations, int operationsSize) {
  stack s;
  init(&s);
  for(int i = 0; i < operationsSize; i++){
    if(operations[i][0] == 'D' || operations[i][0] == 'C' || operations[i][0] == '+'){
      if(s.top == -1){
        continue;
      }
      else{
        if(operations[i][0] == 'D'){
          push(&s, (s.data[s.top] * 2));
        }
        else if(operations[i][0] == 'C'){
          pop(&s);
        }
        else if(operations[i][0] == '+'){
          push(&s, (s.data[s.top] + s.data[s.top-1]));
        }
      }
    }
    else{
      push(&s, atoi(operations[i]));
    }
    printStack(&s);
  }
  if(s.top == -1){
    return 0;
  }
  else{
    int sum = 0;
    for(int i = 0; i <= s.top; i++){
      sum+=s.data[i];
    }
    return sum;
  }
}
