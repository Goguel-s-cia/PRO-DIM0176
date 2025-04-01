#include <iostream>

int main() {

    //Declaração e atribuição
    int min, max, soma = 0;

    std::cin >> min >> max;

    //Se forem o mesmo número, já está feito
    if (min == max) {
        std::cout << "0\n";
        return 0;
    }
    //Caso o min(minimo) seja maior que o max(maximo), trocam para que seja do menor para o maior
    else if (min > max) {
        int aux = min;
        min = max;
        max = aux;
    }

    //A contagem começa a partir do numero depois do min e vai até o max
    for (int i = min+1; i < max; i++) {
        //Se o numero não for par, é adicionado à soma
        if (i % 2 != 0) {
            soma += i;
        }
    }

    //Printa o resultado
    std::cout << soma << "\n";

    return 0;
    
}
