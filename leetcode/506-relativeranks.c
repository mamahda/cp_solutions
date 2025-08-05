/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct {
  int index[10001];
  int score[10001];
  int top;
} scores;

void init(scores* s) {
  s->top = -1;
}

void push(scores* s, int score, int index){
  s->top++;
  s->index[s->top] = index;
  s->score[s->top] = score;
}

void bubbleSort(scores* s){
  bool swapped;
  do{
    swapped = false;
    for(int i = 1; i <= s->top; i++){
      if(s->score[i-1] < s->score[i]){
        int temp = s->score[i-1];
        s->score[i-1] = s->score[i];
        s->score[i] = temp;
        
        int tempIndex = s->index[i - 1];
        s->index[i - 1] = s->index[i];
        s->index[i] = tempIndex;
        
        swapped = true;
      }
    }
  } while(swapped);
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
  *returnSize = scoreSize;
  char** result = (char**)malloc(sizeof(char*) * scoreSize);
  scores s;
  init(&s);
  
  for(int i = 0; i < scoreSize; i++){
    push(&s, score[i], i);
  }
  
  bubbleSort(&s);
  
  for (int i = 0; i < scoreSize; i++) {
    result[i] = (char*)malloc(20 * sizeof(char));
  }
  
  for (int i = 0; i <= s.top; i++) {
    
    if (i == 0) {
      strcpy(result[s.index[i]], "Gold Medal");
    } else if (i == 1) {
      strcpy(result[s.index[i]], "Silver Medal");
    } else if (i == 2) {
      strcpy(result[s.index[i]], "Bronze Medal");
    } else {
      sprintf(result[s.index[i]], "%d", i + 1);
    }
  }
  
  return result;
}
