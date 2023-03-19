#include<iostream>
#include<map>
#include<string>
#include<list>
using namespace std;

int main()
{
    map<string, list<string>>pokedex;

    list<string> pickachuAttack{"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttack{"flame thrower", "scary face"};
    list<string> chikoriaAttacks{"razor leaf", "poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pickachuAttack));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttack));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoriaAttacks));

    for (auto pair : pokedex){
        cout << pair.first << " - ";

        for(auto attack : pair.second)
            cout << attack << ", " ;
    cout << endl;
    }
    

}
