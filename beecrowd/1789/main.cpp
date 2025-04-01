#include <iostream>

int main() {
    int L, V;
    
    //Loop EOF, roda até o fim do documento
    while (std::cin >> L) {
        //Declaração do maior valor
        int maior = 0;
        
        //Loop que roda para ler cada elemento até o tamanho L
        for (int i = 0; i < L; i++) {   
            std::cin >> V;
            //Possivel atualização do maior valor
            if (V > maior) {
                maior = V;
            }
        }
        
        //Classifica a qual categoria pertence o maior valor encontrado
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

