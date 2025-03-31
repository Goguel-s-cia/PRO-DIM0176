#include <iostream>

int main() {
    int m, n;

    //Condições pra rodar o código, quando sair do loop, acaba
    while (std::cin >> m >> n && m > 0 && n > 0) {
        //Deixar m sendo o maior valor
        if (n > m) {
            int aux = m;
            m = n;
            n = aux;
        }

        //Zera a soma
        int soma = 0;

        //Printa cada inteiro da sequencia em ordem crescente
        for(int i = n; i < m; i++) {
            std::cout << i << " ";
            soma += i;
        }

        //printa o ultimo valor e a soma
        std::cout << m << " Sum=" << soma+m << "\n";
    }

    return 0;
}