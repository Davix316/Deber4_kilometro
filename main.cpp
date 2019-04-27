#include <iostream>
using namespace std;

int main() {
	int velocidad, distancia, distancia2, velocidad2;
	
	cout<<"A que velocidad viajan los 2 (km/h): "<<endl;
	cin>>velocidad;
	velocidad2=velocidad;
	distancia=velocidad+70;
	distancia2=150-velocidad2;
	
	if(distancia == distancia2 ){
		cout<<"Se encontraron en el Km "<<distancia<<endl;
	}else {
		cout<<"Se encontraron en el km 110"<<endl;
	}
	
	return 0;
}
