#include <iostream>
#include <iomanip>

int main() {
    
    //Declaração da matriz e variaveis
    double M[12][12], soma = 0;
    char O;
    std::cin >> O;

    //for aninhado para pegar todos os elementos das duas dimensões da matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> M[i][j];

            //Verifica se o elemento faz parte da parte debaixo da diagonal secundaria
            if (i + j > 11) {
                soma += M[i][j];
            }
        }
    }

    //Printa, se pedido a soma, somente a soma, e se pedido a média, a soma dividido pelos elementos
    //que compõe o grupo especificado
    if (O == 'S') {
        std::cout << std::fixed << std::setprecision(1) << soma << "\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << soma / 66 << "\n";
    }
}
    
    
    