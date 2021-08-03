#include <iostream>
#include <string>
#include "bigger.hpp"
using namespace std;

int bigger(string a) {
	
	string k[30];

	for (int i=0;a[i]!='\0';i++) {
		if ( a[i]>= 97 && a[i]<=122){
			a[i] = a[i] - 32;
		}
		else if(a[i] >= 65 && a[i]<=90) {
			a[i] = a[i] + 32;
		}
		cout<<a[i];
	}
	return 0;
}
