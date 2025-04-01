#include <iostream>

int main() {

    int linha, coluna, cor;

    // 0 é preto || 1 é branco
    std::cin >> linha >> coluna;

    //Se a soma for par, é porque a casa é branca
    //Senão, é preta
    if (((linha+coluna)%2) == 0) {
        cor = 1;
    } else cor = 0;

    //Printa resultado
    std::cout << cor << "\n";

    return 0;

}