#include <iostream>
using namespace std;

//Task 1

int main(int argc, char** argv) {
	int espresso = 200;
	int latte = 250;
	int cappucino = 300;
	int EsQ , LaQ , CaQ;
	cout<< "ENTER ESPRESSO QUANTITY."<<endl;
	cin>>EsQ;
	cout<<"enter latte quantity."<<endl;
	cin>>LaQ;
	cout<<"enter cappucino quatity."<<endl;
	cin>>CaQ;
	int *ptrespresso_price = &espresso;
	int *ptrlatte_price = &latte;
	int *ptrcappucino_price = &cappucino;
	
	
	int *ptrEQ = &EsQ;
	int *ptrLQ = &LaQ;
	int *ptrCQ= &CaQ; 
	
	int total = (*ptrespresso_price * *ptrEQ) + (*ptrlatte_price * *ptrLQ) + (*ptrcappucino_price * *ptrCQ);
	cout<< "total price."<<total<<endl;
	
	return 0;
}