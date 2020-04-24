#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct osoba{
	string imie, nazwisko, klasa;
	double srednia;
	int wiek;
};
  void wypisz (struct osoba a ){
  	cout<<a.imie<<endl;
  	cout<<a.nazwisko<<endl;
  	cout<<a.klasa<<endl;
  	cout<<a.srednia<<endl;
  	cout<<a.wiek<<endl;
  	
  }
int main(int argc, char** argv) {
	osoba uczen1={"Piotr", "Nowak", "1GTP", 4.50, 17};
	
	osoba uczen2={"\nJan", "Kowalski", "2GTP", 2.66, 18};
	
	osoba uczen3={"\nIgor", "Puszman", "3GTP", 6,00, 19};
	
	wypisz (uczen1);
	wypisz (uczen2);
	wypisz (uczen3);
	
	
	
	
	return 0;
}
