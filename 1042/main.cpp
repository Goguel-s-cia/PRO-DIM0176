#include <iostream>

int main() {

    int x, y, z;
    int ordem[3];

    std::cin >> x >> y >> z;

    ordem[0] = x;
    ordem[1] = y;
    ordem[2] = z;

   for (int i = 0; i < 2; i++) {
        if( ordem[0] > ordem[1] ) {
            int aux = ordem[0];
            ordem[0] = ordem[1];
            ordem[1] = aux;
        } 
        if( ordem[1] > ordem[2] ) {
            int aux = ordem[1];
            ordem[1] = ordem[2];
            ordem[2] = aux;
        }
   }

    for (int i = 0; i < 3; i++) {
        std::cout << ordem[i] << "\n";
    }

    std::cout << "\n";

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    
    return 0;
}
