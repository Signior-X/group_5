#include "functions.h"
#include <iostream>

using namespace std;



int factorial(int n){
    while (n < 0) {
        cout << "\n A negative number found! Enter a positive number: ";
        cin >> n;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
