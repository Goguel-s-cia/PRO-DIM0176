#include <iostream>
#include <cmath>

int main() {
    //Casos teste
    int T;
    std::cin >> T;
    
    //Loop de execução, quando acabar, acaba o código
    for (int i = 0; i < T; i++) {
        //Variáveis de população e crescimento das cidades A e B
        int PA, PB;
        double G1, G2;
        std::cin >> PA >> PB >> G1 >> G2;
        
        int anos = 0;

        //Loop do crescimento populacional, enquanto PA for menor/igual que PB, e for menos de 100 anos
        while (PA <= PB && anos <= 100) {
            //A população nova é calculada com a população antiga, mais o número do percentual que aumentou
            //Divide-se por 100 pois é porcentacem e o (int) é para haver o arredontamento pra baixo
            PA += (int)(PA * (G1/100.0));
            PB += (int)(PB * (G2/100.0));
            //A contagem de anos aumenta em 1
            anos++;
        }
        
        //Printa o resultado final
        if (anos > 100) {
            std::cout << "Mais de 1 seculo.\n";
        } else {
            std::cout << anos << " anos.\n";
        }
    }
    
    return 0;
}
