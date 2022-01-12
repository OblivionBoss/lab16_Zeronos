#include <iostream>
using namespace std;

int main(){
	int a = 5;
    char b = 'A';
    char &c = b;
    
    int *x = &a;
    char &y = b;
    int **z = &x;
    
    void *m = &b;
    void *n = &c;
    cout << a << " " << b << " " << c << " " << x << " " << m << " " << z << " " << "\n";
    cout << &a << " " << m << " " << n << " " << &x << " " << &m << " " << z << " " << "\n";
    c = 'F';
    cout << a << " " << b << " " << c << " " << x << " " << m << " " << z << " " << "\n";
    y = 'W';
    cout << a << " " << b << " " << c << " " << x << " " << m << " " << z << " " << "\n";
    **z = 6;
    cout << a << " " << b << " " << c << " " << x << " " << m << " " << z << " " << "\n";
    **z = 7;
    cout << a << " " << b << " " << c << " " << x << " " << m << " " << z;
	return 0;
}
