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

  std::cout << "Exercise 1:" << std::endl;
  std::cout << add_xy << std::endl
            << sub_xy << std::endl
            << mult_xy << std::endl
            << div_xy << std::endl;
  
  // Exercise 2
  int isSunny;
  int hasUmbrella;

  isSunny = true;
  hasUmbrella = false;

  std::cout << "Exercise 2:" << std::endl;
  std::cout << (isSunny && hasUmbrella) << std::endl;
  std::cout << (isSunny || hasUmbrella) << std::endl;
  std::cout << (!isSunny) << std::endl;
  std::cout << (!isSunny && !hasUmbrella) << std::endl;

  // Exercise 3 
  int n = 7; 
  double m = 4.0;
  bool hasLicense = false;

  std::cout << "Excerise 3:" << std::endl;
  std::cout << (n > m) << std::endl;
  std::cout << (m == 4.0) << std::endl;
  std::cout << (hasLicense && m <= n) << std::endl;
  std::cout << (n > 5 && hasLicense == false) << std::endl;

  // Exercise 4 
  std::string firstName = "John";
  std::string lastName = "Doe";
  double score = 85.75; 

  std::cout << "Exercise 4" << std::endl;
  std::cout << lastName << ", " << firstName << std::endl;
  std::cout << "Your score is " << score << std::endl;

  // Exercise 5
  int age = 18; 
  double height = 5.9; 
  bool isStudent = true;
  std::string city = "New York";

  std::cout << "Exercise 5" << std::endl; 
  std::cout << (2024 - age) << std::endl;
  std::cout << (age >= 18) << std::endl;
  std::cout << (height > 6) << std::endl; 
  std::cout << (isStudent && city == "New York") << std::endl;

  // Bonus Challenge 
  int i = 50; 
  double d = 100.5; 
  bool flag = false; 

  std::cout << "Bonus Challenge" << std::endl; 
  std::cout << (i % 5 == 0 && d > 50) << std::endl;
  std::cout << ( d <= 100 || flag) << std::endl;
  std::cout << (flag == false && i < 30) << std::endl;


}
