#include <algorithm>
#include <iostream>

// Função1: Leia a entrada de caracteres com letras maiúsculas e minúsculas.
std::string leiaEntrada() {
  std::string entrada;
  std::getline(std::cin, entrada);
  return entrada;
}

// Função2: Reconheça, considere e modifique os caracteres encontrados das
// letras maiúsculas e minúsculas como equivalentes.
void analiseEntrada(std::string entrada) {
  std::string invertida = entrada;
  for (char &aux : invertida) {
    if (std::isupper(aux)) {
      aux = std::tolower(aux);
    } else if (std::islower(aux)) {
      aux = std::toupper(aux);
    }
  }
  std::cout << "Invertida: " << invertida << std::endl;

  std::string maiuscula = entrada;
  std::transform(maiuscula.begin(), maiuscula.end(), maiuscula.begin(),
                 ::toupper);
  std::cout << "Saída maiúscula: " << maiuscula << std::endl;

  std::string minuscula = entrada;
  std::transform(minuscula.begin(), minuscula.end(), minuscula.begin(),
                 ::tolower);
  std::cout << "Saída minúscula: " << minuscula << std::endl;
}

int main() {
  std::cout << "Digite uma frase: ";
  std::string entrada = leiaEntrada();
  analiseEntrada(entrada);
  return 0;
}
