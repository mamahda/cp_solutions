#include <stdio.h>
#include <string.h>

char map[105][105];

void mirror(int x, int y, int dir, int n) {
  if (x < 0 || x >= n || y < 0 || y >= n) {
    for (int i = 0; i < n; i++) {
      printf("%s\n", map[i]);
    }
    return;
  }

  if (map[y][x] == '.') {
    if (dir == 1 || dir == 3) map[y][x] = '|';
    else if (dir == 2 || dir == 4) map[y][x] = '-';
  }
  else if (map[y][x] == '|' || map[y][x] == '-') {
    map[y][x] = '+';
  }
  else if (map[y][x] == '/') {
    if (dir == 1) dir = 2;
    else if (dir == 2) dir = 1;
    else if (dir == 3) dir = 4;
    else if (dir == 4) dir = 3;
  }
  else if (map[y][x] == '\\') {
    if (dir == 1) dir = 4;
    else if (dir == 4) dir = 1;
    else if (dir == 3) dir = 2;
    else if (dir == 2) dir = 3;
  }

  if (dir == 1) y--;     
  else if (dir == 2) x++;
  else if (dir == 3) y++;
  else if (dir == 4) x--;

  mirror(x, y, dir, n);
}

int main() {
  // dir = {1: atas, 2: kanan, 3: bawah, 4: kiri}
  int n, tmp, x = 0, y = 0, dir = 0;
  scanf("%d", &n);

  char from[10];

  for (int i = 0; i < n; i++) {
    scanf("%s", map[i]);
  }

  scanf("%s %d", from, &tmp);

  if (strcmp(from, "atas") == 0) {
    x = tmp;
    y = 0;
    dir = 3; 
  }
  else if (strcmp(from, "kanan") == 0) {
    x = n - 1;
    y = tmp;
    dir = 4; 
  }
  else if (strcmp(from, "bawah") == 0) {
    x = tmp;
    y = n - 1;
    dir = 1; 
  }
  else if (strcmp(from, "kiri") == 0) {
    x = 0;
    y = tmp;
    dir = 2; 
  }

  mirror(x, y, dir, n);
  return 0;
}

