typedef struct {
  char c[10001];
  int top;
} stack;

void init(stack *s){
  s->top = -1;
}

void push(stack *s, char c){
  s->top++;
  s->c[s->top] = c;
}

bool pop(stack *s, char c){
  if(s->c[s->top] == c){
    s->top--;
    return true;
  }
  else{
    return false;
  }
}

bool isValid(char* s) {
  stack stack;
  init(&stack);
  int slength = strlen(s);
  for(int i = 0; i < slength; i++){
    if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
      push(&stack, s[i]);
    }
    if(stack.top == slength){
      return false;
    }
    else if (s[i] == ')' || s[i] == ']' || s[i] == '}'){
      if(stack.top == -1){
        return false;
      }
      else{
        bool popped = false;
        if(s[i] == ')'){
          popped = pop(&stack, '(');
        }
        else if(s[i] == ']'){
          popped = pop(&stack, '[');
        }
        else if(s[i] == '}'){
          popped = pop(&stack, '{');
        }
        if(!popped){
          return false;
        }
        else {
          continue;
        }
      }
    }
  }
  if(stack.top != -1){
    return false;
  }
  else{
    return true;
  }
}
