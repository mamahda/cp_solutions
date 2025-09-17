#include <iostream>

int main(){
  int n;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    int a, b;
    std::cin >> a >> b;
    
    if((a + b) % 3 == 0 && std::min(a, b) * 2 >= std::max(a, b)){
      std::cout << "YES" << std::endl;
    }
    else std::cout << "NO" << std::endl;
  }

  return 0;
}
