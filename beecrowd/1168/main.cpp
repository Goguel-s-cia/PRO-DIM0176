#include <iostream>

int main() {

    int N;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        
        std::string led;
        std::cin >> led;
         
        int leds = 0;

        //jeito legal de percorrer o for, cada elemento da string é um char, como o nome de digito, ai percorre todos os char de led
        for(char digito : led) {
            int num = digito - '0';
            switch(num) {
                case 0:
                    leds += 6;
                    break;
                case 1:
                    leds += 2;
                    break;
                case 2:
                    leds += 5;
                    break;
                case 3:
                    leds += 5;
                    break; 
                case 4:
                    leds += 4;
                    break;
                case 5:
                    leds += 5;
                    break;
                case 6:
                    leds += 6;
                    break;
                case 7:
                    leds += 3;
                    break;
                case 8:
                    leds += 7;
                    break;
                case 9:
                    leds += 6;
                    break;                          
            }
    }

    std::cout << leds << " leds\n";
    
    }

    return 0;
}
