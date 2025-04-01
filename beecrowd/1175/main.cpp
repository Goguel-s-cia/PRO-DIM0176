#include <iostream>

int main() {

    int lista[20] = {};

    //Percorre todos os elementos do array e atribui a todos um valor
    for (int i = 0; i < 20; i++) {
        std::cin >> lista[i];
    }

    //Loop que vai até metade do array, e vai trocando de posição, o 1º elemento, pelo último
    //O 2º pelo antepenúltimo, e assim por diante, por isso só até a metade do array
    for (int i = 0; i < 10; i++) {
        int aux{0};
        aux = lista[i];
        lista[i] = lista[19-i];
        lista[19-i] = aux;
    }

    //Printa todos os elementos do array formatados com o texto
    for (int i = 0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << lista[i] << "\n";
    }
    
    return 0;
}
