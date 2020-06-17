#include <iostream>

using namespace std;

    int soma(){
        int a,b;
        cout << "Introduza os numeros a somar: " << endl;
        cout << "a: " << endl;
        cin >> a;
        cout << "b: " << endl;
        cin >> b;
        cout << "Resultado: " << a+b << endl;
    }
    
    int subtrair(){
        int c,d;
        cout << "Introduza os numeros a subtrair: " << endl;
        cout << "a: " << endl;
        cin >> c;
        cout << "b: " << endl;
        cin >> d;
        cout << "Resultado: " << c-d << endl;
    }


int main(){
    
    while(1){
        cout << "===========MENU==========" << endl;
        cout << "1 - Somar" << endl;
        cout << "2 - Subtrair" << endl;
        cout << "3 - SAIR" << endl;
        cout << "Introduza a opção: " << endl;
        int op;
        cin >> op;
        switch(op){
        case 1:
        {
            soma();
            break;
        }
        
        case 2:
        {
            
            subtrair();
            break;
        }
        
        case 3:
        {
         exit(1);    
        }
        
        default:
            {
              break;
            }
        }
    }
    return 0;
}
