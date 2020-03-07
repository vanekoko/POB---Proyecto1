#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  string nombre, linea2, linea, salidafinal;
  char n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,op;
  int num1,num2,resultado;
  cout<<"Ingrese nombre del archivo de entrada"<< endl;
  cin>>nombre;
  cout<<"Ingrese nombre del archivo de salida"<< endl;
  cin>>salidafinal;
  ifstream entrada, salida;
  ofstream salida1, salida2;
  entrada.open(nombre);
  salida1.open("salida.txt");
  entrada >>n0>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10>>n11>>n12>>n13;
  cout<<n0<<n1<<n2<<n3<<n4<<n5<<n6<<n7<<n8<<n9<<n10<<n11<<n12<<n13<<endl;
  while(getline(entrada,linea2)){
    for (int i=0;i<(int)linea2.length();i++){
        if (linea2[i]==n0){
            linea2.replace(i,1,"0");}
        if (linea2[i]==n1){
            linea2.replace(i,1,"1");}
        if (linea2[i]==n2){
            linea2.replace(i,1,"2");}
        if (linea2[i]==n3){
            linea2.replace(i,1,"3");}
        if (linea2[i]==n4){
            linea2.replace(i,1,"4");}
        if (linea2[i]==n5){
            linea2.replace(i,1,"5");}
        if (linea2[i]==n6){
            linea2.replace(i,1,"6");}
        if (linea2[i]==n7){
            linea2.replace(i,1,"7");}
        if (linea2[i]==n8){
            linea2.replace(i,1,"8");}
        if (linea2[i]==n9){
            linea2.replace(i,1,"9");}
        if (linea2[i]==n10){
            linea2.replace(i,1,"+");}
        if (linea2[i]==n11){
            linea2.replace(i,1,"-");}
        if (linea2[i]==n12){
            linea2.replace(i,1,"*");}
        if (linea2[i]==n13){
            linea2.replace(i,1,"/");}
}
salida1<<linea2<<endl;
}
entrada.close();
salida1.close();
salida.open("salida.txt");
salida2.open(salidafinal);
  while(getline(salida,linea)){
    salida>>num1>>op>>num2;
    switch (op){
      case '+':
      resultado = num1 + num2;
      break;
      case '-':
      resultado = num1 - num2;
      break;
      case '*':
      resultado = num1 * num2;
      break;
      case '/':
      resultado = num1 / num2;
      break;
    }
    salida2<<num1<<"\t"<<op<<"\t"<<num2<<"\t"<<'='<<"\t"<<resultado<<endl;
    cout<<num1<<"\t"<<op<<"\t"<<num2<<"\t"<<'='<<"\t"<<resultado<<endl;
  }
  salida.close();
  salida2.close();
  return 0;
}
