#include<iostream>
#include<cstdlib>
using namespace std;



void separar(string txt);

void separar(string txt) {
    int i;
    string longitud{txt};
    string num;
    string sub;
    string text;
    num = "";
    text = "";
    for (i=0;i<=txt.size();i++) {
        sub = txt.substr(i,i-i+1);
        if (sub=="1" || sub=="2" || sub=="3" || sub=="4" || sub=="5" || sub=="6" || sub=="7" || sub=="8" || sub=="9" || sub=="0") {
            num = (num+sub);
        } else {
            text = (text+sub);
        }
    }
    cout << "TEXTO: " << text << "   NUMERO:" << atof(num.c_str()) << endl;
}

int main() {
    string stri;
    cout << "INGRESE UNA CADENA DE CARACTERES " << endl;
    cin >> stri;
    cout << "ORIGINAL: " << stri << endl;
    separar(stri);
    return 0;
}
