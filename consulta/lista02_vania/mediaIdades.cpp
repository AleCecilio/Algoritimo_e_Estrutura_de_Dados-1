#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade = 0;         // Para armazenar a idade digitada
    int somaIdades = 0;    // Para somar todas as idades
    int i = 0;      // Para contar quantas idades foram digitadas
    float mediaIdades = 0; // Para guardar a m�dia das idades

    cout<<"Digite as idades (digite 0 para parar):\n";

    while(true){ // Continue pedindo idades at� o usu�rio decidir parar
        cout<<"Idade: "; cin>>idade;      // L� a idade digitada

        if(idade == 0){  // Se a idade for 0, parar o loop
            break;
        }

        somaIdades = somaIdades + idade;  // Adiciona a idade � soma total
        i++; // Aumenta a contagem de idades
    }

    if(i>0){   // Se pelo menos uma idade foi digitada
        mediaIdades = (float)somaIdades / i; // Calcula a m�dia das idades
    
        cout<<"A m�dia das idades �: "<<mediaIdades<<"\n";
    }else{
        cout<<"Nenhuma idade v�lida foi digitada."<<"\n"; // Mensagem se nenhuma idade foi digitada
    }

    return 0;
}
