#include <iostream>

int main() {
    int N, L;
    std::string S;
    std::cin >> N;
    
    for (int i = 0; i < N; i++) {
        std::cin >> L;
        int hash = 0;
        for (int j = 0; j < L; j++) {
            std::cin >> S;
            for (int k = 0; k < S.size(); k++) {
                hash += (S[k] - 'A') + j + k;
            }
        }
        std::cout << hash << "\n";
    }
    return 0;
}
