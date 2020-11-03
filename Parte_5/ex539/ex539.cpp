#include <iostream>
#include <string>

using namespace std;

struct Date{
	unsigned int anno;
	unsigned int mese;
	unsigned int giorno;
};

struct Student {
	unsigned int matricola;
	string nome, cognome;
	Date datanascita;
	float votomedio;
	
};

const unsigned int N = 3;
int main(){
	// Input
	Student S[N];
	int matricola;
	int anno, mese, giorno;
	float votomedio;
	for (int i = 0; i < N; ++i){
		cout << "Informazioni studente " << i+1 << endl;
		cout << "Inserisci il numero di matricola: ";
		cin >> matricola;
		if (matricola < 0){
			cout << "Matricola invalida";
			return -1;
		} else {
			S[i].matricola = matricola;
		}
		
		cout << "Inserisci nome e cognome dello studente: ";
		cin >> S[i].nome >> S[i].cognome;		
	
		cout << "Inserisci la data di nascita: (anno, mese, giorno): ";
		cin >> anno >> mese >> giorno;
		if (anno < 0 || (mese < 0 || mese > 12) || (giorno < 0 || giorno > 31)){
			cout << "Data invalida.";
			return -1;
		} else {
			S[i].datanascita.anno = anno;
			S[i].datanascita.mese = mese;
			S[i].datanascita.giorno = giorno;
		}
		
		cout << "Inserisci voto medio ";
		cin >> S[i].votomedio;
	}
	
	// Algoritmo bubble sort - ordinamento crescente
	Student temp;
	for (int j = 1; j < N; ++j){
		for (int i = 1; i < N; ++i){
			if (S[i-1].datanascita.anno < S[i].datanascita.anno){
				temp = S[i-1];			
				S[i-1] = S[i];
				S[i] = temp;
			} else if (S[i-1].datanascita.anno == S[i].datanascita.anno){
				if (S[i-1].datanascita.mese < S[i].datanascita.mese){
					temp = S[i-1];			
					S[i-1] = S[i];
					S[i] = temp;
				} else if ((S[i-1].datanascita.mese == S[i].datanascita.mese) && (S[i-1].datanascita.giorno < S[i].datanascita.giorno)){
					temp = S[i-1];			
					S[i-1] = S[i];
					S[i] = temp;	
				}
			}
		}
	}

	// Output - decrescente
	for (int i = N-1; i >= 0; i--){
		cout << "Studente: " << S[i].matricola << endl;
		cout << S[i].nome << " " << S[i].cognome << endl;
		cout << S[i].datanascita.anno << " " << S[i].datanascita.mese << " " << S[i].datanascita.giorno << endl;
		cout << S[i].votomedio << endl;
	}
}
