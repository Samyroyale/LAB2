/*
ARDUINO
void setup() {
  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    //recibir string
    String incomingString = Serial.readString();

    // imprimir dato ingresado
    Serial.print("I received: ");
    Serial.println(incomingString);
    //covertir
    incomingString.toUpperCase();
     Serial.println(incomingString);
  }
}

 */
#include<iostream>
#include<cctype>
using namespace std;


string mayusculas(string s);


int main() {
    string frase;

    cout << "INGRESE EL TEXTO QUE DESEA CONVERTIR " << endl;
    cin >> frase;
    cout << "EL TEXTO EN MAYUSCULAS ES: " << mayusculas(frase) << endl;
    return 0;
}


string mayusculas(string s) {
    for(unsigned int i=0;i<s.size();i++)
        s[i] = toupper(s[i]);
    return s;
}
