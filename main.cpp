<iostream>

using namespace std;

intmain(){

    floata=0, b=0, c=0, S=0;

    cin >> a >> b >> c;


    S=a*b/2;
    cout<< "l'area del triangolo è : " <<S<<endl;
    S=0;
    
    S=a*a;
    cout<< "l'area del quadrato è : " <<S<<endl;
    S=0;
    
    S=a*b;
    cout<< "l'area del rettangolo è : " <<S<<endl;
    S=0;
    
    S=(a+b)*c/2;
    cout<< "l'area del trapezio è : " <<S<<endl;
    
    return 0;
}
