#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void delay(int j){
	int i,k;
	for(i=0; i<j; i++)
		k = i;
}

int main(){
	system("color 2");
	int i, x, y;
	int List[169];
	char Letter;
	srand(time(0));
	while (true){
		for (i=0; i<168; i++){
			x = rand()%2;
			y = rand()%4;
			List[i]  = x;
			if (y ==0){
				cout<<List[i]<<"   ";}
			else if (y ==1){
				cout<<List[i]<<"   ";}
	}
		delay(100000000);
		cout<<endl;
}}
