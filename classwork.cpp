#include <iostream>
#include <string>

int main()
{
  // Exercise 1 
  int x;
  int y;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy;

  x = 25;
  y = 3;
  add_xy = x + y;
  sub_xy = x - y;
  mult_xy = x * y;
  div_xy = x / y;

  std::cout << add_xy << std::endl
            << sub_xy << std::endl
            << mult_xy << std::endl
            << div_xy << std::endl;
  
  // Exercise 2
  int isSunny;
  int hasUmbrella;

  isSunny = true;
  hasUmbrella = false;

  std::cout << (isSunny && hasUmbrella) << std::endl;
  std::cout << (isSunny || hasUmbrella) << std::endl;
  std::cout << (!isSunny) << std::endl;
  std::cout << (!isSunny && !hasUmbrella) << std::endl;

  // Exercise 3 
  int n;
  double m;
  bool hasLicense;

  n = 7;
  m = 4.0;
  hasLicense = false;

}
