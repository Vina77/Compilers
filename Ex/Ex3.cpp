#include <cctype>
#include <iostream>
#include <sstream>

void lexicalAnalyser(std::string aux) {
  std::string number = "";
  for (char &c : aux) {
    if (std::isdigit(c) || c == '.') {
      number += c;
    } else {
      if (!number.empty()) {
        if (number.find('.') != std::string::npos)
          std::cout << number << " => Número real \n" << std::endl;
        else
          std::cout << number << " => Número natural \n" << std::endl;
        number = "";
      }
      if (std::isalpha(c))
        std::cout << " Coloque apenas números e operadores \n" << std::endl;
      else if (c == '+')
        std::cout << c << " => Operador de soma \n" << std::endl;
      else if (c == '-')
        std::cout << c << " => Operador de subtração \n" << std::endl;
      else if (c == '*')
        std::cout << c << " => Operador de multiplicação \n" << std::endl;
      else if (c == '/')
        std::cout << c << " => Operador de divisão \n" << std::endl;
      else if (c == '(')
        std::cout << c << " => Abre parêntesis \n" << std::endl;
      else if (c == ')')
        std::cout << c << " => Fecha parêntesis \n" << std::endl;
      else
        std::cout << "É um caractere especial desconhecido \n" << std::endl;
    }
  }
  if (!number.empty()) {
    if (number.find('.') != std::string::npos)
      std::cout << number << " => Número real \n" << std::endl;
    else
      std::cout << number << " => Número natural \n" << std::endl;
  }
}

int main() {
  std::string userInput;
  std::cout << "Coloque a operação: ";
  std::getline(std::cin, userInput);
  lexicalAnalyser(userInput);
  return 0;
}
