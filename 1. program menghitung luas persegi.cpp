#include "iostream"
using namespace std;

int main(int argc, char const *argv[]) {
  int p,l,luas;
  std::cout << "program menghitung luas persegi panjang" << '\n';
  std::cout << "masukan panjang :";
  std::cin >> p;
  std::cout << "masukan lebar :";
  std::cin >> l;

  luas=p*l;

  std::cout << "luas persegi panjang adalah :"<<luas << '\n';
  return 0;
}
