#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    std::cout << N << "\n";

    for (int i = 0; i < 7; i++) {
        std::cout << N / notas[i] << " nota(s) de R$ " << notas[i] << ",00" << "\n";
        N = N % notas[i];
    }
    return 0;
}
