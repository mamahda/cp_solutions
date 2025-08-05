#include <iostream>
#include <algorithm>

int main(){
  std::string str[4];
  int i;
  for(i = 0; i < 3; i++){
    std::cin >> str[i];
  }

  str[3] = str[0] + str[1];
  if(str[3].length() != str[2].length()){
    std::cout << "NO" << std::endl;
    return 0;
  }

  std::sort(str[2].begin(), str[2].end());
  std::sort(str[3].begin(), str[3].end());

  for(i = 0; i < str[2].length(); i++){
    if(str[2][i] != str[3][i]){
      std::cout << "NO" << std::endl;
      return 0;
    }
  }

  std::cout << "YES" << std::endl;
}
