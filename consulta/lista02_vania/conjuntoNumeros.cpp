#include <iostream>
using namespace std;

int main() {
    int valor;        // Para armazenar o valor digitado pelo usuário
    int maior = 0;    // Para armazenar o maior valor encontrado, inicializado como 0
    int menor = 0;    // Para armazenar o menor valor encontrado, inicializado como 0
    bool primeiroValor = true; // Para verificar se é o primeiro valor digitado

    while (true) {
        // Solicita ao usuário para digitar um valor
        cout << "Digite um valor inteiro positivo (ou 0 para encerrar): ";
        cin >> valor;

        // Verifica se o valor é zero para encerrar o programa
        if (valor == 0) {
            break; // Sai do loop se o valor for zero
        }
        
        // Verifica se o valor é negativo
        if (valor < 0) {
            cout << "Valor negativo! Digite apenas valores positivos.\n";
            continue; // Pular para o próximo valor
        }
        
        // Se for o primeiro valor digitado
        if (primeiroValor) {
            maior = valor; // Define o maior valor como o primeiro valor
            menor = valor; // Define o menor valor como o primeiro valor
            primeiroValor = false; // Marca que o primeiro valor foi digitado
        } else {
            // Atualiza o maior valor se o valor digitado for maior
            if (valor > maior) {
                maior = valor;
            }
            
            // Atualiza o menor valor se o valor digitado for menor
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    // Exibe o maior e o menor valor encontrados
    cout << "O maior valor digitado foi: " << maior << endl;
    cout << "O menor valor digitado foi: " << menor << endl;

    return 0; 
}