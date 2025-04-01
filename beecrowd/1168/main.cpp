#include <iostream>

int main() {

    //Declaração e atribuição
    int N;
    std::cin >> N;

    //Loop roda a quantidade de casos, quando sair, acaba o código
    for (int i = 0; i < N; i++) {

        //Declaração e atribuição
        std::string led;
        std::cin >> led;
         
        int leds = 0;

        //jeito legal de percorrer o for, cada elemento da string é um char, com o nome de digito, ai percorre todos os char de led
        for(char digito : led) {
            //Subtrair -'0' do char tranforma ele em int
            int num = digito - '0';

            //Switch para percorrer todas as possibilidades dos numeros nos leds
            //E soma a quantidade de leds que cada numero individual vai precisar
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

    //Printa resultado
    std::cout << leds << " leds\n";
    
    }

    return 0;
}
