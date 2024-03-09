#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria{
	private:
		string nombreTitular;
		string numeroCuenta;
		double saldo;
		
	public:
		CuentaBancaria(string nT, string nC, double s) : nombreTitular(nT), numeroCuenta(nC), saldo(s) {}
		
		void depositar(double cantidad){
			saldo += cantidad;
		}
		
		void retirar(double cantidad){
			if(saldo >= cantidad){
				saldo -= cantidad;
			}else{
				cout << "No tiene el dinero suficiente." << endl;
			}
		}
		
		void consultar(){
			cout << "Saldo en la cuenta de " << nombreTitular << ": Q" << saldo << endl;
		}
};

int main(){
	CuentaBancaria cuenta("Alejandro Ailon", "5090231070", 1000);
	cuenta.consultar();
	cuenta.depositar(500);
	cuenta.retirar(200);
	cuenta.consultar();
	
	return 0;
}