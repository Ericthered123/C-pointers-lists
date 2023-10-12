#include <iostream>
using namespace std;

int main()
{ 
string name; //line 1
cout << "Give me your name and surname:"<<endl;//line 2
cin >> name;//line 3
cout << name<<endl;
cin.ignore(1000,'\n');//Ignora hasta 1000 caracteres por lo menos hasta que encuentre un espacio blanco.
int age;//line 4
cout << "Give me your age:" <<endl;//line 5
cin >> age;//line 6
cout << cin.rdstate() << endl; //Muestra si el estado del I/0 esta en goodbit(0) o badbit
cout << cin.rdstate();
 //it's gonna return false if types doesn't match
if (cin >> age)
  cout << "Your age is equal to:" << endl;
else
{
 cin.clear();//Limpia el estado del I/O y devuelve un goodbit(0),esto es si se ingreso un tipo de dato que no coincida
 cin.ignore(10000, '\n'); //
 cout << "Give me your age name as string I dare you";
 cin >> age;
}
}
/*int age;
cout << "Give me your age:" <<endl;
cin >> age;
cout << "Your age is" << age << endl;

string nameAndSurname;
cin.ignore(1000,'\n');
cout << "Give me your name and surname:"<< endl;
getline(cin, nameAndSurname);

cout << "Hello, " << nameAndSurname << endl;*/