#include <iostream>

int main() {

    int min, max, soma = 0;

    std::cin >> min >> max;

    if (min == max) {
        std::cout << "0\n";
        return 0;
    }else if (min > max) {
        int aux = min;
        min = max;
        max = aux;
    }

    for (int i = min+1; i < max; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    std::cout << soma << "\n";

    return 0;
    
}
