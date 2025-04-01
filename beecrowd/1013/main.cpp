#include <iostream>

//Função que calcula o maior número baseado na fórmula descrita
int MaiorAB(int a, int b) {
    //abs é absolut e retorna o valor exato, como em um módulo matemático
    return (a + b + abs(a - b)) / 2;
}

int main() {

    //Declaração
    int a, b, c;
    //Atribuição
    std::cin >> a >> b >> c;
    //Saída com a chamada e retorno função
    std::cout << MaiorAB(MaiorAB(a, b), c) << " eh o maior\n";

    return 0;
}
