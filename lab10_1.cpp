#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	
	double PB,In,pay,NB;
	cout << "Enter initial loan: ";
	cin >> PB;NB=PB;
	cout << "Enter interest rate per year (%): ";
	cin >> In;In*=0.01;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for(int i=1;NB > 0;i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PB;
	cout << setw(13) << left << PB*In;
	cout << setw(13) << left << PB+PB*In;
	if(PB+PB*In < pay){
		pay=PB+PB*In;
	}
	cout << setw(13) << left << pay;
	cout << setw(13) << left << (PB+PB*In)-pay;
	cout << "\n";
	NB=PB*In+PB-pay;
	PB=NB;
	}
	return 0;
}
