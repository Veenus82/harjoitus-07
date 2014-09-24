/******
*ohjelman nimi: harjoitus 7
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi senttein� > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg

b) k�yt� cin/cout/cin.get... olioita ohjelman
toteuttamiseen (c++ metodit, kirja sivu 92 - 99)

*versio 1.0
*pvm: 17.9.2014
*/
#include <iostream>
#include <string>
using namespace std;
const int SATA = 100;
void main()

{
	char nimi[100];
	char osoite[100];
	int pituus;
	int paino;

	cout << "Ihannepaino";
	cout << "\n\nOhjelma laskee ihannepainosipituutesi perusteella.";
	cout << "\n\nAnna nimesi ";
	cin.get(nimi,100);
	cout << "Anna pituutesi sentteina ";
	cin >> pituus;
	cin.get();
	cout << "Anna osoitteesi ";
	cin.get(osoite, 100);
	cout << "Anna painosi kiloina ";
	cin >> paino;

	cout << "\nArvoisa "<< nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen painosi on " << paino << "kg";
	cout << "\nIhannepainosi on " << (pituus - SATA) << "kg";
	cout << "\nErotus " << (paino-(pituus - SATA)) << "kg";



		



	
		
}