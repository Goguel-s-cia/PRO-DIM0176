#include <iostream>
#include <string>
#include <sstream>

int main() {
    //Variavel que armazena toda a linha
    std::string entrada;
    
    //Definição do loop, quando sair do loop, acaba o código
    while (std::getline(std::cin, entrada) && entrada != "*") {
        
        //Stream (fluxo) para separar as palavras
        std::stringstream fluxo(entrada);

        //Variavel para armazenar cada palavra individual
        std::string palavra;

        //Variavel booleana pra definir se é tautograma
        bool tauto = true;

        //Variável que armazena a primeira letra da palavra, que é o importante
        char primeiraLetra = '\0';
        
        //Loop para trabalhar com cada palavra individual do fluxo
        while (fluxo >> palavra) {

            //O '\0' indica que é a primeira palavra, entao nao tem com o que comparar
            if (primeiraLetra == '\0') {
                //Sempre colocando em maiúsculo tudo pra não haver problema
                primeiraLetra = toupper(palavra[0]);
            }
            //Se entrar nesse if, é porque a letra na 1ª posição da nova palavra é diferente da primeiraLetra
            else if (toupper(palavra[0]) != primeiraLetra) {
                tauto = false;
                break;
            }
        }
        
        //Aprendi a utilizar o ternário com booleano, fica bem mais compacto, se o bool for true, printa Y, senão, printa N
        std::cout << (tauto ? "Y" : "N") << "\n";
    }
    
    return 0;
}
