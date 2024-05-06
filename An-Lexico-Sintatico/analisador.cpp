#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string userInput;
    int operandCount = 0;
    int operatorCount = 0;

    std::cout << "Coloque uma expressao matematica para ser analisada: " << std::endl;
    std::getline(std::cin, userInput);

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "  Lexema  |  Token (tipos de token)" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    for (int i = 0; i < userInput.length(); i++)
    {
        if (isdigit(userInput[i]))
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Numero" << std::endl;
            operandCount++;
        }
        else if (isalpha(userInput[i]))
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Variavel" << std::endl;
            operandCount++;
        }
        else if (userInput[i] == '(' || userInput[i] == ')' || userInput[i] == '{' || userInput[i] == '}' || userInput[i] == '[' || userInput[i] == ']' || userInput[i] == ',' || userInput[i] == '.' || userInput[i] == '\'' || userInput[i] == '\"')
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Delimitador" << std::endl;
        }
        else if (userInput[i] == '+' || userInput[i] == '-' || userInput[i] == '*' || userInput[i] == '/' || userInput[i] == '=')
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Operador" << std::endl;
            operatorCount++;
        }
        else
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Caractere desconhecido" << std::endl;
        }
    }
    std::cout << "-----------------------------------" << std::endl;

    if (operandCount > 3 || operatorCount > 2)
    {
        std::cout << "A expressao inserida nao e valida. Ela deve conter tres operandos e no maximo dois operadores alem do de atribuicao." << std::endl;
    }

    return 0;
}
