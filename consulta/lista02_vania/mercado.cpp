/*Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou 
não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado e 
sua resposta (S — sim; ou N — não). Sabe-se que foram entrevistadas dez pessoas. 
Faça um programa que calcule e mostre:
a)o número de pessoas que responderam sim;
b)o número de pessoas que responderam não;
c)o número de mulheres que responderam sim; e
d)a percentagem de homens que responderam não, entre todos os homens analisados.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main() {
    setlocale(LC_ALL, "portuguese");

	int i=1;
	char sexo, resposta;
	int nPsim=0, nPnao=0, nMsim=0, nHnao=0, percHnao=0, nHresp=0;
	
    while(i<=10){
    	cout<<"\n"<<i<<"° ENTREVISTADO:\n";
		
		// Validação do sexo
        do{
            cout<<"Qual seu sexo (F/M): "; cin>>sexo;
            if(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm'){
                cout<<"Erro: Sexo inválido! Digite 'F' para feminino ou 'M' para masculino.\n";
            }
        }while(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');

        // Validação da resposta
        do{
            cout<<"Gostou do novo produto lançado (S/N)? "; cin>>resposta;
            if(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
                cout<<"Erro: Resposta inválida! Digite 'S' para sim ou 'N' para não.\n";
            }
        }while(resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n');
		
		if(resposta == 'S' || resposta == 's'){
			nPsim++; //incrementa o numero respostas sim
			
			if(sexo == 'F' || sexo == 'f'){
				nMsim++; //incrementa o numero de mulheres que responderam nao
			}
		}else if(resposta == 'N' || resposta == 'n'){
			nPnao++; //incrementa o numero respostas não
			
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
        percHnao = (nHnao * 100.0) / nHresp; // Calcula a percentagem com precisão
    } else {
        percHnao = 0; // Define a percentagem como 0 se não há homens entrevistados
    }
	
	// Exibe os resultados
    cout<<"\nRespostas sim: "<<nPsim;
    cout<<"\nRespostas não: "<<nPnao;
    cout<<"\nRespostas femininas sim: "<<nMsim;
    cout<<"\n% masculina das respostas não: "<<percHnao<<"%\n";

    return 0; 
}