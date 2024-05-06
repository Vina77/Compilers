#include <iostream>
#include <string>
#include <cctype>

// Função para validar a expressão
bool isValidExpression(const std::string& expression) {
    int operandCount = 0;
    int operatorCount = 0;
    bool lastCharWasOperator = false;

    for (char c : expression) {
        if (isdigit(c)) {
            operandCount++;
            if (lastCharWasOperator) {
                return false; // Erro: dois operandos seguidos
            }
        } else if (isalpha(c)) {
            operandCount++;
            if (lastCharWasOperator) {
                return false; // Erro: dois operandos seguidos
            }
        } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=') {
            operatorCount++;
            lastCharWasOperator = true;
            if (operandCount > 3 || operatorCount > 2) {
                return false; // Erro: mais de três operandos ou operadores após o símbolo de atribuição
            }
        } else {
            lastCharWasOperator = false;
        }
    }

    return true;
}

int main() {
    std::string userInput;
    std::cout << "Coloque uma expressao matematica para ser analisada: " << std::endl;
    std::getline(std::cin, userInput);

    // Verificação sintática
    if (!isValidExpression(userInput)) {
        std::cout << "A expressao inserida nao e valida. Ela deve conter tres operandos e no maximo dois operadores alem do de atribuicao." << std::endl;
        return 0; // Termina o programa se a expressao for inválida
    }

    // Análise léxica (identificação de lexemas e tokens)
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "  Lexema  |  Token (tipos de token)" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    int operandCount = 0;
    int operatorCount = 0;
    bool lastCharWasOperator = false;

    for (char c : userInput) {
        if (isdigit(c)) {
            std::cout << "     " << c << "    |  Numero" << std::endl;
            operandCount++;
            if (lastCharWasOperator) {
                std::cout << "Erro: dois operandos seguidos" << std::endl;
            }
        } else if (isalpha(c)) {
            std::cout << "     " << c << "    |  Variavel" << std::endl;
            operandCount++;
            if (lastCharWasOperator) {
                std::cout << "Erro: dois operandos seguidos" << std::endl;
            }
        } else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=') {
            std::cout << "     " << c << "    |  Operador" << std::endl;
            operatorCount++;
            lastCharWasOperator = true;
            if (operandCount > 3 || operatorCount > 2) {
                std::cout << "Erro: mais de três operandos ou operadores após o símbolo de atribuição" << std::endl;
            }
        } else {
            lastCharWasOperator = false;
        }
    }
    std::cout << "-----------------------------------" << std::endl;

    return 0;
}
