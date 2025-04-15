#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) {

    for(size_t ct{0}; ct<argc; ++ct) {
        std::cout << ">> Arg["<< ct << "] = " << std::quoted(argv[ct])<< "\n";
    }
    return 0;
}