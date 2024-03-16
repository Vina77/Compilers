#include <iostream>
#include <string>

int main() {
  std::string entrada;
  std::cout << "Digite uma string: ";
  std::getline(std::cin, entrada);

  int numCaracteres = 0;
  int numEspacos = 0;
  std::string saida;

  for (char c : entrada) {
    if (c == ' ') {
      numEspacos++;
    } else {
      numCaracteres++;
      saida += c;
    }
  }

  std::cout << "1 - Total de caracteres: " << numCaracteres << std::endl;
  std::cout << "2 - Total de espaços em branco: " << numEspacos << std::endl;
  std::cout << "3 - Total de caracteres com espaços em branco: "
            << numCaracteres + numEspacos << std::endl;
  std::cout << "4 - Sequência de caracteres sem espaços: " << saida
            << std::endl;

  return 0;
}
