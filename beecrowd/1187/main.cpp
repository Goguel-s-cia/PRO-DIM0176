#include <iostream>
#include <iomanip>

int main() {
    
    double M[12][12], soma = 0;
    char O;
    std::cin >> O;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            std::cin >> M[i][j];
            if ((j > i) && (j + i < 11)) {
                soma += M[i][j];
            }
        }
    }

    if (O == 'S') {
        std::cout << std::fixed << std::setprecision(1) << soma << "\n";
    } else {
        std::cout << std::fixed << std::setprecision(1) << soma / 30 << "\n";
    }
}
    
    
    