#include <iostream>
#include <locale.h>
#include <vector>
#include <fstream>

using namespace std;

struct Pessoa {
    std::string cpf;
    std::string nome;
    std::string data_nasc;
    std::string endereco;
    char sexo;
    std::string telefone;
    std::string email;
};

struct Associado {
    int id; 
    std::string cpf;
    std::string data_associacao;
    std::string tipo_socio;
};

struct Dependente {
    int codigo; 
    int codExterno; 
    std::string cpf_associado;
    std::string nome;
    std::string data_nasc;
    char sexo;
};

struct Visitante {
    int codigo;
    std::string cpf;
    int codigo_associado;
    std::string nome;
    std::string data_nasc;
    char sexo;
    std::string data_visita_inicial;
    std::string data_visita_final;
};


void cadastrarAssociados(vector<Associado> &associadosArray){
		int op;
		Associado associado;
		while(true){
			cout << "Deseja alterar ou cadastar?" << endl;
	   	    cout << "1- Cadastar" << endl;
	   	    cout << "2- Alterar" << endl;
			cout << "3- Sair" << endl;
			cin >> op;
			switch(op){
				case 1:
					associado.id = associadosArray.size() + 1 ;
			        cout << "CPF do Associado: ";
			        cin >> associado.cpf;
			        cout << "Data de Associacao: ";
			        cin >> associado.data_associacao;
			        cout << "Tipo de Socio (proprietario ou contribuinte): ";
			        cin >> associado.tipo_socio;
			        associadosArray.push_back(associado);
			        
					break;
	   	   	   default:
  				   return;
		   	   	   break;
	   	   }
		}
}

void cadastrarDependentes(){
		int op;
		Dependente dependente;
		while(true){
			cout << "Deseja alterar ou cadastar?" << endl;
	   	    cout << "1- Cadastar" << endl;
	   	    cout << "2- Alterar" << endl;
			cout << "3- Sair" << endl;
			cin >> op;
			switch(op){
				case 1:
					dependente.id = associadosArray.size() + 1 ;
			        cout << "CPF do Associado: ";
			        cin >> associado.cpf;
			        cout << "Data de Associacao: ";
			        cin >> associado.data_associacao;
			        cout << "Tipo de Socio (proprietario ou contribuinte): ";
			        cin >> associado.tipo_socio;
			        associadosArray.push_back(associado);
			        
					break;
	   	   	   default:
  				   return;
		   	   	   break;
	   	   }
		}
	return;
}

void cadastrarVisitantes(){
	return;
}
void relatorioDependenteAssociado(){
	return;
}
void relatorioVisitaAssociados(){
	return;
}


int main (){
	setlocale(LC_ALL, "portuguese");
	int op;
	vector<Associado> associadoArray;
	vector<Dependente> dependenteArray;
	while(true)
	{
        cout << "MENU PRINCIPAL"<<endl;
        cout << "1-Cadastro e manutenção de dados de associados"<<endl;
        cout << "2-Cadastro e manutenção de dados dependentes"<<endl;
        cout << "3-Cadastro e manutenção de dados visitante"<<endl;
        cout << "4-Relatório de dependentes/associados"<<endl;
        cout << "5-Relátorio de visitas por associado"<<endl;
        cout << "6-Sair"<<endl;
        cout << "Escolha sua opção: ";
        cin>>op;
        cout << endl;
        
        switch (op){
        	
			case 1:
				cadastrarAssociados(associadoArray);
				break;
			
			case 2:
				cadastrarDependentes();
				break;
			
			case 3:
				cadastrarVisitantes();
				break;
			
			case 4:
				relatorioDependenteAssociado();
				break;
			
			case 5:
				relatorioVisitaAssociados();
				break;
			
			case 6:
				cout << "Fechando O Programa, Obrigado!\n\n";
				return 0;
				break;
			
			default:
				cout << "Opcão Invalida!\n\n";
				break;
		}
	}
}




