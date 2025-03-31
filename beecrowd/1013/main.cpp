#include <iostream>

int MaiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main() {

    int a, b, c;

    std::cin >> a >> b >> c;

    std::cout << MaiorAB(MaiorAB(a, b), c) << " eh o maior\n";

    return 0;
}
