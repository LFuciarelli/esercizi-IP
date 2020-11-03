#include <iostream>
#include <cmath>

using namespace std;

struct Complex{
	double re;
	double im;
	double modulo;
	double fase; 
};

const double PI = 3.1415;
int main(){
	Complex num1;
	cout << "Inserisci la parte reale e immaginaria del numero: ";
	cin >> num1.re >> num1.im;

	Complex num2;
	cout << "Inserisci la parte reale e immaginaria del numero: ";
	cin >> num2.re >> num2.im;
	
	// somma
	Complex somma;
	somma.re = num1.re + num2.re;
	somma.im = num1.im + num2.im;
	somma.modulo = sqrt(somma.re*somma.re + somma.im*somma.im);
	if (somma.re == 0){
		if (somma.im > 0)
			somma.fase = PI/2;
		else if (somma.im < 0)
			somma.fase = -PI/2;
	} else {
		somma.fase = atan(somma.im/somma.re);
		if (somma.re < 0 && somma.im >= 0)
			somma.fase += PI;		
		else if (somma.re < 0 && somma.im < 0)
			somma.fase -= PI;
	}
	cout << "Somma nella forma cartesiana: " << somma.re << " i" << somma.im << endl;
	cout << "Somma nella forma esponenziale: " << somma.modulo << "e^i" << somma.fase << endl; 

	// differenza
	Complex dif;
	dif.re = num1.re - num2.re;
	dif.im = num1.im - num2.im;
	dif.modulo = sqrt(dif.re*dif.re + dif.im*dif.im);
	if (dif.re == 0){
		if (dif.im > 0)
			dif.fase = PI/2;
		else if (dif.im < 0)
			dif.fase = -PI/2;
	} else {
		dif.fase = atan(dif.im/dif.re);
		if (dif.re < 0 && dif.im >= 0)
			dif.fase += PI;		
		else if (dif.re < 0 && dif.im < 0)
			dif.fase -= PI;
	}
	cout << "Differenza nella forma cartesiana: " << dif.re << " i" << dif.im << endl;
	cout << "Differenza nella forma esponenziale: " << dif.modulo << "e^i" << dif.fase << endl;

	// prodotto
	Complex prodotto;
	prodotto.re = num1.re*num2.re - num1.im*num2.im;
	prodotto.im = num1.re*num2.im + num1.im*num2.re;
	prodotto.modulo = sqrt(prodotto.re*prodotto.re + prodotto.im*prodotto.im);
	if (prodotto.re == 0){
		if (prodotto.im > 0)
			prodotto.fase = PI/2;
		else if (prodotto.im < 0)
			prodotto.fase = -PI/2;
	} else {
		prodotto.fase = atan(prodotto.im/prodotto.re);
		if (prodotto.re < 0 && prodotto.im >= 0)
			prodotto.fase += PI;		
		else if (prodotto.re < 0 && prodotto.im < 0)
			prodotto.fase -= PI;
	}
	cout << "Prodotto nella forma cartesiana: " << prodotto.re << " i" << prodotto.im << endl;
	cout << "Prodotto nella forma esponenziale: " << prodotto.modulo << "e^i" << prodotto.fase << endl;

	// rapporto
	Complex rapporto;
	rapporto.re = (num1.re*num2.re + num1.im*num2.im)/(num2.re*num2.re + num2.im*num2.im);
	rapporto.im = (num1.re*num2.im - num1.im*num2.re)/(num2.re*num2.re + num2.im*num2.im);
	rapporto.modulo = sqrt(rapporto.re*rapporto.re + rapporto.im*rapporto.im);
	if (rapporto.re == 0){
		if (rapporto.im > 0)
			rapporto.fase = PI/2;
		else if (rapporto.im < 0)
			rapporto.fase = -PI/2;
	} else {
		rapporto.fase = atan(rapporto.im/rapporto.re);
		if (rapporto.re < 0 && rapporto.im >= 0)
			rapporto.fase += PI;		
		else if (rapporto.re < 0 && rapporto.im < 0)
			rapporto.fase -= PI;
	}
	cout << "Rapporto nella forma cartesiana: " << rapporto.re << " i" << rapporto.im << endl;
	cout << "Rapporto nella forma esponenziale: " << rapporto.modulo << "e^i" << rapporto.fase << endl; 
}
