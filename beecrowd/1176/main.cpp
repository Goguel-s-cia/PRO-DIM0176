#include <iostream>

int main() {
    //Array para armazenar os números de Fibonacci
    unsigned long long fib[61];
    
    //Inicializa os primeiros valores da sequência
    fib[0] = 0;
    fib[1] = 1;
    
    //Calcula todos os números de Fibonacci até o 60º termo
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    //Lê o número de casos de teste
    int T;
    std::cin >> T;
    
    //Processa cada caso de teste
    for (int i = 0; i < T; i++) {
        int N;
        std::cin >> N;
        std::cout << "Fib(" << N << ") = " << fib[N] << "\n";
    }
    
    return 0;
}

