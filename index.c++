#include

int main() {
    int opcao;
    float num1, num2;

    std::cout << "Bem-vindo a Calculadora Simples!" <<std::endl;
    std::cout << "1. Adição" <<std::endl;
    std::cout << "2. Subtração" <<std::endl;
    std::cout << "3. Multiplicação" <<std::endl;
    std::cout <<"4. Divisão" <<std::endl;

    std::cout << "Escolha uma opção: ";
    std::cin >> opcao;

    std::cout << "Digite o primeiro número: ";
    std:cin >> num1;

    std::cout <<"Digite o segundo número: ";
    std::cin >> num2;

    switch (opcao) {
        case 1:
            std::cout << "Resultado: " << num1 + num2 <<std::endl;
            break;
        case 2:
            std::cout << "Resultado: " << num1 - num2 <<std::endl;
            break;
        case 3:
            std::cout << "Resultado: " << num1 * num2 <<std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout <<"Resultado: " << num1 / num2 << std::endl;
            } else {
                std::cout <<"Erro: Divisão por zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Opção Inválida!" << std::endl;

            }
        return 0;
    }
}   