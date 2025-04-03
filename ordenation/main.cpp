#include <iostream>
#include <iterator>

void print(const int* first, const int* last) {
    std::cout << "[ ";
    while(first != last) {
        std::cout << *first << " ";
        first++;
    } 
    std::cout << "]\n";

}

int * filter( int* first, const int* last) {
    int *fast{first};
    int *slow{first}; // Marca o fim dos filtrados

    // Enquanto não processar todos
    while(fast != last) {
        // Aplicar critério de filtragem
        if(*fast > 0) {
            *slow = *fast; // Sobrescrevendo
            slow++;
        }
        fast++; //Sempre avanço
    }

    return slow;
}

int main() {

    int vec[]{ -2, -8, 6, 7, -3, 10, 1, 0, -3, 7};
    size_t size_vec{sizeof(vec)/sizeof(int)};

    //print(std::begin(vec), std::end(vec));
    std::cout << ">> Original vec: ";
    print(vec, vec+size_vec);

    auto new_end = filter(vec, vec + size_vec);

    std::cout << "\n";
    std::cout << ">> Vec after filter: ";
    print(vec, new_end);

    return 0;
}