#include <iostream>
#include <string>

using namespace std;

void print_menu(string, string, string, string);
void print_choice(int, string, string, string, string);
int get_choice(int);
int use_menu(string, string, string, string);

int main(){
	const string s1 = "Prima scelta";
	const string s2 = "Seconda scelta";
	const string s3 = "Terza scelta";
	const string s4 = "Basta!";
	int answer;
	do {
		answer = use_menu(s1, s2, s3, s4);
	} while (answer != 4);
}

void print_menu(string choice1, string choice2, string choice3, string choice4){
	cout << "1	" << choice1 << endl;
	cout << "2	" << choice2 << endl;
	cout << "3	" << choice3 << endl;
	cout << "4	" << choice4 << endl;
}

void print_choice(int n, string ch1, string ch2, string ch3, string ch4){
	cout << "Scelta effettuata: ";
	switch (n){
		case 1:
			cout << ch1 << endl;
			break;
		case 2:
			cout << ch2 << endl;
			break;
		case 3:
			cout << ch3 << endl;
			break;
		case 4:
			cout << ch4 << endl;
			break;
	}
}

int get_choice(int max){
	int scelta;
	do {
		cout << "Inserisci una scelta fra 1 e " << max << endl;
		cin >> scelta;
	} while (scelta < 1 || scelta > max);
	return scelta;
}

int use_menu(string choice1, string choice2, string choice3, string choice4){
	print_menu(choice1, choice2, choice3, choice4);
	int n = get_choice(4);
	print_choice(n, choice1, choice2, choice3, choice4);
	return n;
}
