#include <iostream>

//pesquisei e aprendi esse método, não o desenvolvi sozinho, mas entendi seu funcionamento, transformando tudo, no final, em zeros e ums e somando-os
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else if (n == 2) {
        return 1;
    } else {
        //Aplicando recursividade até que não chegue mais nesse else e tudo sejam apenas 1 ou 0
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    //Quantidade de casos
    int T;
    std::cin >> T;

    //Loop que loopa a quantidade de casos
    for (int i = 0; i < T; i++) {
        int N;
        std::cin >> N;
        //Chamada da função que age de maneira recursiva
        std::cout << "Fib(" << N << ") = " << fibonacci(N) << "\n";
    }
    return 0;
}

