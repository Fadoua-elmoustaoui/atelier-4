#include<iostream>
#include <list>
#include <iterator>
using namespace std;
class Elments ;
class Chien ;
class Race {
protected :
    char specificite;
    israceHybride();
    Race(){ std ::cout<<"class Race\n";
}
};
using namespace std;
class Animal {
protected :
string nom;
int age;
string genre;
Animal(){ cout<<"class Animal\n";
}
};
class Chat : public Animal {
private :
    string type;
public :
    sauter();
Chat(){ cout<<"class Chat\n";
}
};
class Entraineur {
private :
string nom ;
string description ;
Chien *chn;
Entraineur(){ cout<<"class Entrainteur \n";
}
};
class Chien : public Animal , public Race {
private :
string taille ;
Entraineur * entr ;
public :
    ischass3();
    Chien(){ cout<<"class Chien\n";
}
};
class Repas {
private :
    string nom ;
int heure ;
string description ;
    Elments *elm;

public :
	Repas(){ cout<<"class Repas\n";
}
};

class Elments {
private :
string nom ;
string type ;
Elments(){ cout<<"class Elments\n";
}
};

class Compitition {
private :
string date ;
string nom ;

public :
int ordre ;
Compitition(){ cout<<"class Comptition\n";
}   
};
int main (){
Chat ch ;// test
Chien c; //test
}
