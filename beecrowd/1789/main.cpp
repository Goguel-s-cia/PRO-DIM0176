#include <iostream>

int main() {
    int L, V;
    
    while (std::cin >> L) {
        int maior = 0;
        
        for (int i = 0; i < L; i++) {   
            std::cin >> V;
            if (V > maior) {
                maior = V;
            }
        }
        
        if (maior >= 20) {
            std::cout << "3" << "\n";
        } else if (maior < 10) {
            std::cout << "1" << "\n";
        } else {
            std::cout << "2" << "\n";
        }
    }
    
    return 0;
}

