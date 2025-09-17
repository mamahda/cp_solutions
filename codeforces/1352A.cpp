#include <iostream>

struct data{
  int angka;
  int digit;
};

int digit(int i){
  if(i == 0) return 1;
  return 10 * digit(--i);
}

int main(){
  int t, n;
  std::cin >> t;
  for(int k = 0; k < t; k++){
    int i = 0, digit = 0;
    data arr[5];
    std::cin >> n;
    while(n > 0){
      if(n % 10 != 0){
        arr[i].angka = n % 10;
        arr[i].digit = digit;
        i++;
      }
      n = n / 10;
      digit++;
    }
    std::cout << i << std::endl;
    for(int j = 0; j < i; j++){
      std::cout << arr[j].angka;
      for(int k = 0; k < arr[j].digit; k++){
        std::cout << "0";
      }
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}
