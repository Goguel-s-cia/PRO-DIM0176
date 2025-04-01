#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    //Declaração
    float x1, y1, x2, y2, distancia;
    //Atribuição
    std::cin >> x1 >> y1 >> x2 >> y2;
    //A distancia é calculada a partir da formula descrita
    //sqrt é a raiz quadrada e pow eleva o número ao quadrado
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    //fixed e setprecision deixam as casas decimais em um numero fixo escolhido, nesse caso, 4
    std::cout << std::fixed << std::setprecision(4) << distancia << "\n";

    return 0;
}
