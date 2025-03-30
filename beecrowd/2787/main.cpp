#include <iostream>

int main() {

    int linha, coluna, cor;

    // 0 é preto || 1 é branco
    std::cin >> linha >> coluna;

    if (((linha+coluna)%2) == 0) {
        cor = 1;
    } else cor = 0;

    std::cout << cor << "\n";

    return 0;

}