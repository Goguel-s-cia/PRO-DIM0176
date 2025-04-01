#include <iostream>

int main() {
    //Atribui o valor total a variável N
    int N;
    std::cin >> N;

    //Declaração do array com todos os possiveis valores de notas
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    std::cout << N << "\n";

    //Laço para passar por todos os valores presentes no array(qtd 7) e fazer as operações necessarias
    for (int i = 0; i < 7; i++) {
        //Divide o numero total pelo valor da posição atual do array e concatena com texto
        std::cout << N / notas[i] << " nota(s) de R$ " << notas[i] << ",00" << "\n";

        //Atualiza o valor total para o resto da divisão anteriormente feita
        N = N % notas[i];
    }
    return 0;
}
