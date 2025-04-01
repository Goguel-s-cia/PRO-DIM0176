#include <iostream>

int main() {
    
    int x1, y1, x2, y2;

    //Loop de execução, quando acabar, o código acaba
    //Verificação das condições de execução do código
    //Nesse caso, verifica se as quatro entradas não são 0
    while (std::cin >> x1 >> y1 >> x2 >> y2 && (x1 != 0 || y1 != 0 || x2 != 0 || y2 != 0)) {
        //Verifica se a casa final já não é a inicial
        if (x1 == x2 && y1 == y2) {
            std::cout << 0 << "\n";
        }
        //Verifica se está na mesma linha ou coluna, sendo apenas um movimento necessario
        else if (x1 == x2 || y1 == y2) {
            std::cout << 1 << "\n";
        } 
        //Verifica se está na mesma diagonal, sendo apenas um movimento necessario
        //Se a diferença entre as linhas for a mesma entre as colunas, significa que é uma diagonal
        //O abs(absolute) é para pegar o valor exato, a distancia entre casas
        else if (abs(x2 - x1) == abs(y2 - y1)) {
            std::cout << 1 << "\n";
        } 
        //Se não está na linha, coluna ou diagonais, a dama pode chegar em qualquer outra casa em dois movimentos
        //basta movimentar na coluna e depois na linha ou vice-versa
        else {
            std::cout << 2 << "\n";
        }
    }
    return 0;
}