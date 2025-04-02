#include <iostream>
#include <string>
#include <algorithm>

int main() {
    //Declaração da variavel que armazena o conteudo da linha
    std::string linha;

    //variavel auxiliar para a exibição da linha em branco
    bool primeiroCaso = true;
    
    //Loop para que o codigo seja EOF, quando o loop acabar, o código termina
    while (std::getline(std::cin, linha)) {
        //if para printar a linha em branco que tem entre os casos
        if (!primeiroCaso) {
            std::cout << "\n";
        }
        primeiroCaso = false;
        
        //Array que conta a frequencia de que vezes o caractere apareceu
        //Inicia o array com 0 em todas as posições
        int freq[128] = {0};  
        
        //For pra iteração de cada caractere da string lida
        for (char c : linha) {
            //Aumenta a quantidade de aparições em 1 cada vez que o caractere aparece
                freq[c]++;
        }
        
        // Arrays separados para frequência e código ASCII
        int frequencias[128];
        int asciis[128];
        int nPares = 0;
        
        // Preenche os arrays
        for (int i = 32; i < 128; i++) {
            if (freq[i] > 0) {
                frequencias[nPares] = freq[i];
                asciis[nPares] = i;
                nPares++;
            }
        }
        
        // Ordena os arrays
        for (int i = 0; i < nPares - 1; i++) {
            for (int j = 0; j < nPares - i - 1; j++) {
                if (frequencias[j] > frequencias[j + 1] || 
                    (frequencias[j] == frequencias[j + 1] && asciis[j] < asciis[j + 1])) {
                    // Troca frequências
                    int tempFreq = frequencias[j];
                    frequencias[j] = frequencias[j + 1];
                    frequencias[j + 1] = tempFreq;
                    
                    // Troca códigos ASCII
                    int tempAscii = asciis[j];
                    asciis[j] = asciis[j + 1];
                    asciis[j + 1] = tempAscii;
                }
            }
        }
        
        // Imprime resultado
        for (int i = 0; i < nPares; i++) {
            std::cout << asciis[i] << " " << frequencias[i] << "\n";
        }
    }
    return 0;
}
