// g++ -std=c++11 -Wall *.cpp -o output
#include "rot13.h"
#include <iostream>
#include <sstream>
#include <fstream>

int main(int argc, char* argv[]) {
  if(argc == 0) {
    std::cerr << "Provide a file to convert.\nUsage: (programme) filename.txt" << std::endl;
    return 1;
  }

  for (int i = 0; i < argc; i++) {
    std::cout << argv[i] << std::endl;
  }

  std::string filename = argv[1];

  std::ifstream text(filename);
  std::stringstream buffer;
  buffer << text.rdbuf();

  std::cout << buffer.str() << std::endl;

  std::cout << rot13("Hello World!") << std::endl;

  return 0;
}