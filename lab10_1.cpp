#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	int eof;
    eof = 1;
	double inter;
	double prev;
	double total;
	double nb;
	double pp;
	
	
	cout << "Enter initial loan: ";
    cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
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

prev = loan;

while(1){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << eof; 
	if( eof == 1){
		prev =  loan;
		}else{
			prev = nb;
		}
	cout << setw(13) << left << prev;

	inter = prev*(rate/100);
	cout << setw(13) << left << inter;

	total = prev + inter;
	cout << setw(13) << left << total;

    pp = pay;
	if(total < pp){
	pp = total;
	cout << setw(13) << left << total;
	}else{
	cout << setw(13) << left << pp;
	}

    nb = total- pp;
	cout << setw(13) << left << nb;
	
	cout << "\n";	
	eof++;
	if(nb <= 0){
		break;
	}
}

	return 0;
}
