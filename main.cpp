#include <iostream>
using namespace std;

int main(){

float a=0, b=0, c=0, S=0;
cout<<"inseriere i valori di a,b,c :<<endl;
cin >> a >> b >> c;

S=a*b/2;
cout<<"l'area del triangolo è : "<<S<<endl;
S=0;
  
S=a*a;
cout<<"l'area del quadrato è : "<<S<<endl;
S=0;
  
S=a*b;
cout<<"l'area del rettangolo è : "<<S<<endl;
S=0;
  
S=(a+b)*c/2;
cout<<"l'area del trapezio è : "<<S<<endl;

}
