// Xammy Yang
// yxammy@csu.fullerton.edu
// @YXammy
// Partner: @barragan-j

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc <= 1) {
    std::cerr << "error: you must supplu at least one number" << std::endl;
    return 1;
  }

  double sum = 0;
  for (int i = 1; i < argc; ++i){
    sum += std::stod(arguments[i]);
  }

  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}
