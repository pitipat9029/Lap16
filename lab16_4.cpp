#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int R =rand()%4  ;
	const int tempA = a ;
	const int tempB = b ;
	const int tempC = c ;
	const int tempD = d ;
	if (R == 0){
		c = a ;
		a = tempC ; 
	} 
	else if (R == 1){
		d = b ;
		b = tempD ;
	}
	else if (R == 2){
		a = b ;
		b = tempA ;
	}
	else if (R == 3){
		b = c ;
		c = tempB ;
	}
}
	