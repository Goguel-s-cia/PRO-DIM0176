#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    float x1, y1, x2, y2, distancia;

    std::cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    std::cout << std::fixed << std::setprecision(4) << distancia << "\n";

    return 0;
}
