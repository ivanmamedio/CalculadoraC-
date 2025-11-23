#include <iostream>

int main() {
    int opcao;
    float num1, num2;

    std::cout << "Bem-vindo à Calculadora Simples!" << std::endl;
    std::cout << "1. Adição" << std::endl;
    std::cout << "2. Subtração" << std::endl;
    std::cout << "3. Multiplicação" << std::endl;
    std::cout << "4. Divisão" << std::endl;

    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    if (opcao == 1) {
        std::cout << "Resultado: " << (num1 + num2) << std::endl;
    } else if (opcao == 2) {
        std::cout << "Resultado: " << (num1 - num2) << std::endl;
    } else if (opcao == 3) {
        std::cout << "Resultado: " << (num1 * num2) << std::endl;
    } else if (opcao == 4) {
        if (num2 != 0.0f)
            std::cout << "Resultado: " << (num1 / num2) << std::endl;
        else
            std::cout << "Erro: divisão por zero." << std::endl;
    } else {
        std::cout << "Opção inválida." << std::endl;
    }

    return 0;
}