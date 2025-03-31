#include <iostream>

//pesquisei e aprendi esse método, não o desenvolvi sozinho, mas entendi seu funcionamento, transformando tudo, no final, em zeros e ums e somando-os
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        std::cin >> N;
        std::cout << "Fib(" << N << ") = " << fibonacci(N) << "\n";
    }
    return 0;
}

