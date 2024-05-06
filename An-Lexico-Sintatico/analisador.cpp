#include <iostream>
#include <string>
#include <cctype>

int main()
{

    std::string userInput = "2+3-x=1";

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "  Lexema  |  Token (tipos de token)" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    for (int i = 0; i < userInput.length(); i++)
    {
        if (isdigit(userInput[i]))
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Numero" << std::endl;
        }
        else if (isalpha(userInput[i]))
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Variavel" << std::endl;
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
        }
        else
        {
            std::cout << "     " << userInput[i] << "    |  "
                      << "Caractere desconhecido" << std::endl;
        }
    }
    std::cout << "-----------------------------------" << std::endl;

    return 0;
}