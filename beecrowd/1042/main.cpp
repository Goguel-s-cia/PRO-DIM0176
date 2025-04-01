#include <iostream>

int main() {

    //Declaração e atribuição
    int x, y, z;
    int ordem[3];

    //Ordem digitada, será utilizada no futuro
    std::cin >> x >> y >> z;

    //Atribuição dos valores às posições no array
    ordem[0] = x;
    ordem[1] = y;
    ordem[2] = z;

    //For para percorrer duas vezes o algoritmo de ordenação, pois como são apenas 3 numeros, é certeza que eles estarão ordenados
    for(int i = 0; i < 2; i++) {
        //Se o número da esquerda for maior que o do meio, trocam de posição
            if( ordem[0] > ordem[1] ) {
                int aux = ordem[0];
                ordem[0] = ordem[1];
                ordem[1] = aux;
            } 
        //Se o número do meio for maior que o da direita, trocam de posição
            if( ordem[1] > ordem[2] ) {
                int aux = ordem[1];
                ordem[1] = ordem[2];
                ordem[2] = aux;
            }
    }

    //Printa o array ordenado
    for (int i = 0; i < 3; i++) {
        std::cout << ordem[i] << "\n";
    }

    std::cout << "\n";

    //Printa a ordem original, foi útil ;)
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    
    return 0;
}
