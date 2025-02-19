#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    srand(time(0));
	
    int n, somma, media, c, i;
	
	do {
		cout<<"Inserire il numero elementi del vettore"<<endl;
        cin>>n;
	}
	while (n<0);
	
	vector<int>v(n);
	i=0;
	
	while (i<n) {
		v[i]= rand() % int(1001);
		i=i+1;
	}
	
	i=0;
	somma=0;
	while (i<n) {
		somma=somma+v[i];
		i=i+1;
	}
	
	i=0;
	c=0;
	
	media=somma/n;
	cout<<"La media dei nuemeri è "<<media<<endl;;
	
	cout<<" ";
	cout<<"I numeri maggiori della media sono: ";
	while (i<n) {
		if (v[i]>media) {
			cout<<v[i]<<"; ";
		}
		i=i+1;
	}
	
	cout<<" ";
	cout<<"Posizione: ";
	i=0;
	while (i<n) {
		if (v[i]>media) {
			cout<<i<<"; ";
			c=c+1;
		}
		i=i+1;
	}
	cout<<" ";

	cout<<"I numemri superiori alla media sono "<<c<<endl;
}