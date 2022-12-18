#include <iostream>
#include <list>

using namespace std;

int main()
{
    int x;
    char cont = 'o' ;

    //Declaration du liste
    list <int> ma_liste;

    //Remplissage du liste
    cout << "Veuillez entrer un entier : " ;
    cin >> x;
    ma_liste.push_back(x);

    do
    {
        cout << "Veuillez entrer un entier : " ;

        cin >> x;

        ma_liste.push_back(x);

        cout << " Vous voulez Continuer (o/n) ?: " ;

        cin >> cont;

    }
    while(cont!='n');

    //Tri des éléments de la liste
    ma_liste.sort();

    //Affichage des éléments de la liste
    list <int> :: iterator it;

    cout << "Voila votre liste est ordonnee : "<<endl;

    for(it = ma_liste.begin(); it != ma_liste.end(); ++it)
    {
        cout << '\t' << *it;
    }
    return 0;
}