#include <iostream>
#include <string>

using namespace std;

struct Studente{
	string Cognome;
	string Nome;
};

const unsigned int DIM = 5;
int main(){
	Studente S[DIM];

	for (int i = 0; i < DIM; ++i){
		string cognome, nome;
		cout << "Inserisci cognome e nome del " << i+1 << "° studente: ";
		getline(cin, cognome);
		getline(cin, nome);

		for (int j = 0; j < cognome.length(); ++j){
			if (cognome[j] >= 97 && cognome[j] <= 127)
				cognome[j] = cognome[j] - 32;
			if (nome[j] >= 97 && nome[j] <= 127)
				nome[j] = nome[j] - 32;
		}

		S[i].Cognome = cognome;
		S[i].Nome = nome;
	}
	
	for (int i = 0; i < DIM; ++i){
		cout << S[i].Cognome << " " << S[i].Nome << endl;
	}
}
