#include <iostream>

int main() {

    int lista[20] = {};

    for (int i = 0; i < 20; i++) {
        std::cin >> lista[i];
    }

    for (int i = 0; i < 10; i++) {
        int aux{0};
        aux = lista[i];
        lista[i] = lista[19-i];
        lista[19-i] = aux;
    }

    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << lista[i] << "\n";
    }
    
    return 0;
}
