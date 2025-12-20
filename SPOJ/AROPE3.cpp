#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Node {
  char value;
  int priority, size;
  bool reversed;
  Node *left, *right;

  Node(char v) : value(v), priority(rand()), size(1), 
    reversed(false), left(nullptr), right(nullptr) {}
};

int getSize(Node* node) {
  return node ? node->size : 0;
}

void updateSize(Node* node) {
  if (node) {
    node->size = 1 + getSize(node->left) + getSize(node->right);
  }
}

void push(Node* node) {
  if (node && node->reversed) {
    swap(node->left, node->right);
    if (node->left) node->left->reversed ^= 1;
    if (node->right) node->right->reversed ^= 1;
    node->reversed = false;
  }
}

void split(Node* node, int key, Node*& left, Node*& right) {
  if (!node) {
    left = right = nullptr;
    return;
  }
  push(node);
  int curKey = getSize(node->left);
  if (curKey < key) {
    split(node->right, key - curKey - 1, node->right, right);
    left = node;
  } else {
    split(node->left, key, left, node->left);
    right = node;
  }
  updateSize(node);
}

Node* merge(Node* left, Node* right) {
  push(left);
  push(right);
  if (!left) return right;
  if (!right) return left;

  if (left->priority > right->priority) {
    left->right = merge(left->right, right);
    updateSize(left);
    return left;
  } else {
    right->left = merge(left, right->left);
    updateSize(right);
    return right;
  }
}

void reverse(Node* node) {
  if (node) {
    node->reversed ^= 1;
  }
}

char getAt(Node* node, int pos) {
  push(node);
  int curPos = getSize(node->left);
  if (pos == curPos) return node->value;
  if (pos < curPos) return getAt(node->left, pos);
  return getAt(node->right, pos - curPos - 1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  srand(time(0));

  string s;
  cin >> s;

  Node* root = nullptr;
  for (char c : s) {
    root = merge(root, new Node(c));
  }

  int q;
  cin >> q;

  while (q--) {
    int cmd;
    cin >> cmd;

    if (cmd == 1) {
      int x, y;
      cin >> x >> y;

      Node *left, *mid, *right;
      split(root, x, left, mid);
      split(mid, y - x + 1, mid, right);

      reverse(mid);

      root = merge(mid, merge(left, right));

    } else if (cmd == 2) {
      int x, y;
      cin >> x >> y;

      Node *left, *mid, *right;
      split(root, x, left, mid);
      split(mid, y - x + 1, mid, right);

      reverse(mid);

      root = merge(merge(left, right), mid);

    } else {
      int y;
      cin >> y;
      cout << getAt(root, y) << '\n';
    }
  }

  return 0;
}
