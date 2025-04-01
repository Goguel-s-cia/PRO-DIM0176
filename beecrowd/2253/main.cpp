#include <iostream>
#include <string>
#include <cctype>

//Função com a lógica de programação para validar a senha
bool validarSenha(const std::string& senha) {

    //Verifica o tamanho da senha
    if (senha.length() < 6 || senha.length() > 32) {
        //Já retorna false se a senha não cumprir os requisitos
        return false;
    }

    //Declaração de variáveis com as competências que a senha tem que ter
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temNumero = false;
    
    //Um outro tipo de iteração, mais compacto, vou preferir usar esse tipo
    //Percorre toda a string senha passando por cada char, e atribuindo este valor do char, ao c
    for (char c : senha) {

        //Para as comparações, utilizo funções da biblioteca cctype

        //A função isalnum verifica se o caractere é alfanumerico, que quer dizer, uma letra
        //ou um número. No caso da sua negação, significa que se for verdadeiro, é porque
        //algum dos caracteres não é alfanumerico, sendo invalido para a senha
        if (!isalnum(c)) {
            return false;
        }
        
        //A função issupper verifica se ao menos uma das letras é minuscula, e caso positivo,
        //Já altera o estado do boolean respectivo
        if (isupper(c)) {
            temMaiuscula = true;
        }

        //Mesma coisa da função anterior, porém para minúsculas
        else if (islower(c)) {
            temMinuscula = true;
        }
        //Mesma coisa da função anterior, porém para numeros
        else if (isdigit(c)) {
            temNumero = true;
        }
    }
    
    //Somente retorna true se todos os componentes forem true, se pelo menos um for false, já retorna false
    return temMaiuscula && temMinuscula && temNumero;
}

int main() {
    std::string senha;
    
    //Loop pra que funcione EOF, quando sair do loop, o programa encerra
    while (std::getline(std::cin, senha)) {
        //Chama função que retorna um booleano, já implementado num if, que apresenta se 
        //a senha é válida ou não dependendo do retorno da função
        if (validarSenha(senha)) {
            std::cout << "Senha valida.\n";
        } else {
            std::cout << "Senha invalida.\n";
        }
    }
    
    return 0;
}
