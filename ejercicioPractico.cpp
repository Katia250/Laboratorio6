#include <iostream>
using namespace std;

int main (){
    int numero=0;
    cout<<"Ingrese un numero" <<endl;
    cin>>numero;

    for (int i=numero; i>=0;i--){
        cout<<"Cuenta regresiva:"<<i<<endl;
    }
    return 0;
}
