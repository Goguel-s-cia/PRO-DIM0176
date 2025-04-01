#include <iostream>

int main() {

    //Quantidade de casos teste
    int N, L;
    std::cin >> N;
    std::string S;
    
    //Loop de execução, quando acabar, termina o código
    for (int i = 0; i < N; i++) {
        //Leitura de quantos elementos serão
        std::cin >> L;

        //Declaração e atribuição
        int hash = 0;

        //Loop que percorre todos os elementos desse caso
        for (int j = 0; j < L; j++) {
            //Leitura do elemento todo
            std::cin >> S;

            //Loop que percorre cada caractre do elemento, até o fim da string
            for (int k = 0; k < S.size(); k++) {
                //O hash adiciona o seu valor antigo(afinal, é uma soma dos elemetos do caso) mais o valor do caractre
                //Que é feito quando se faz a operação - 'A', transformando char em int, depois adiciona-se o valor 
                //da posição do elemento e da posição do caractre no elemento
                hash += (S[k] - 'A') + j + k;
            }
        }
        //Printa a soma hash
        std::cout << hash << "\n";
    }
    return 0;
}
