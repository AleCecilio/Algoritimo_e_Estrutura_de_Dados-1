/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou 
n�o de um novo produto lan�ado. Para isso, forneceu o sexo do entrevistado e 
sua resposta (S � sim; ou N � n�o). Sabe-se que foram entrevistadas dez pessoas. 
Fa�a um programa que calcule e mostre:
a)o n�mero de pessoas que responderam sim;
b)o n�mero de pessoas que responderam n�o;
c)o n�mero de mulheres que responderam sim; e
d)a percentagem de homens que responderam n�o, entre todos os homens analisados.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main() {
    setlocale(LC_ALL, "portuguese");

	int i=1;
	char sexo, resposta;
	int nPsim=0, nPnao=0, nMsim=0, nHnao=0, percHnao=0, nHresp=0;
	
    while(i<=10){
    	cout<<"\n"<<i<<"� ENTREVISTADO:\n";
		
		// Valida��o do sexo
        do{
            cout<<"Qual seu sexo (F/M): "; cin>>sexo;
            if(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm'){
                cout<<"Erro: Sexo inv�lido! Digite 'F' para feminino ou 'M' para masculino.\n";
            }
        }while(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');

        // Valida��o da resposta
        do{
            cout<<"Gostou do novo produto lan�ado (S/N)? "; cin>>resposta;
            if(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
                cout<<"Erro: Resposta inv�lida! Digite 'S' para sim ou 'N' para n�o.\n";
            }
        }while(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n');
		
		if(resposta == 'S' || resposta == 's'){
			nPsim++; //incrementa o numero respostas sim
			
			if(sexo == 'F' || sexo == 'f'){
				nMsim++; //incrementa o numero de mulheres que responderam nao
			}
		}else if(resposta == 'N' || resposta == 'n'){
			nPnao++; //incrementa o numero respostas n�o
			
			if(sexo == 'M' || sexo == 'm'){
				nHnao++; //incrementa o numero de homens entrevistados
			}
		}
		
		if(sexo == 'M' || sexo == 'm'){
			nHresp++; //incrementa o numero de homens que responderam
		}
		
		i++;
	}
	
	if (nHresp > 0) {
        percHnao = (nHnao * 100.0) / nHresp; // Calcula a percentagem com precis�o
    } else {
        percHnao = 0; // Define a percentagem como 0 se n�o h� homens entrevistados
    }
	
	// Exibe os resultados
    cout<<"\nRespostas sim: "<<nPsim;
    cout<<"\nRespostas n�o: "<<nPnao;
    cout<<"\nRespostas femininas sim: "<<nMsim;
    cout<<"\n% masculina das respostas n�o: "<<percHnao<<"%\n";

    return 0; 
}