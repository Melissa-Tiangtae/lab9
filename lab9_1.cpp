#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	int i=1;
    double loan,rate,pay;
    double prevbalance,interest, total, newbalance,payment;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

		cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";


	newbalance = loan;

	do{
		
		prevbalance = newbalance;
	interest = (rate/100)*prevbalance;
	total = prevbalance + interest;
	payment = pay;
	newbalance = total - payment;


	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevbalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	if(payment > total){
		payment = total;
		newbalance = 0;
	}
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";
	i++;

	}while(newbalance > 0);

	
	return 0;
}
