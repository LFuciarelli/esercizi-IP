#include <iostream>

using namespace std;

const float CM2FOOT = 0.0328;

int main()
{
	cout << "Inserisci altezza in cm (numero intero):" << endl;
	int h_cm;
	cin >> h_cm;
	
	float h_foot;
	h_foot = h_cm*CM2FOOT;

	int i, j;

	i = static_cast<int>(h_foot); // parte intera della misura
	float t = h_foot - i + 0.05;
	cout << t;
	j = ((h_foot - i+0.05)*12); // parte decimale
	
	cout << "L'altezza è " << i << " piedi e " << j << endl;
}
