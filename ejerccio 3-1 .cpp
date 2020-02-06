#include <iostream>
using namespace std;
class Gato{
private:
int suEdad;
float suPeso;

void Edad(int edad);
int Edad();
void Peso(float peso);
float Peso();
void Maullar();
};
void Gato::Edad(int edad){
suEdad = edad;
}
int Gato::Edad(){
return suEdad;
}
void Gato::Peso(float peso){
suPeso = peso;
}
float Gato::Peso(){
return suPeso;
}
void Gato::Maullar(){
cout << "Miauuuuu" << endl;
}
int main (void){
Gato Esponja;
Esponja.Edad(9);
Esponja.Peso(4.2);
cout << "El peso de Esponja es: " << Esponja.Edad() << endl;
cout << "La edad de Esponja es: " << Esponja.Peso() << endl;
Esponja.Maullar();
}
