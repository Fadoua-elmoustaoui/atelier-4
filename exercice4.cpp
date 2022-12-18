#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;
int main()
{
    list<string>Pliste;
    Plist.push_back("Basma  moussif 20ans");
    Plist.push_back("Salma  oufrid  16ans");
    Plist.push_back("Ahmed  Mounir  21ans");
    Plist.push_back("Chaymae Ismail 24ans");
    Plist.sort();

    //affichage
    list <string> :: iterator it;
    cout << "Voila votre liste est ordonnee : "<<endl;
    for(it = Pliste.begin(); it != Pliste.end(); ++it)
    {
     cout << '\t' << *it;
     cout << '\n';
    }
    return 0;
}