#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int G[] = {*a,*b,*c,*d}, r[4];
    bool check;
    for(int i = 0; i < 4; i++){
        int n;
        do
        {
        n=rand()%4;
        check=true;
        for (int j=0;j<i;j++)
           if (n == r[j]){
            check=false; 
            break;
            }
        } while (!check);
    r[i]=n;
    }
    
    *a = G[r[0]];
    *b = G[r[1]];
    *c = G[r[2]];
    *d = G[r[3]];
}
