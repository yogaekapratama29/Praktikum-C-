#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

string balikKata(const string & kata){
    stack<char>stackKarakter;
    for(char ch : kata){
        stackKarakter.push(ch);
    }
    string kataTerbalik = " ";
    while (!stackKarakter.empty())
    {
        kataTerbalik += stackKarakter.top();
        stackKarakter.pop();
    }
    return kataTerbalik;
}

int main(){
    string input;
    cout << "Masukan Kalimat : " << endl;
    getline(cin, input);

    stack <string> stackKata;
    stringstream ss(input);
    string kata;

    while (ss >> kata)
    {
        stackKata.push(balikKata(kata));
    }
    cout << "Array Stack : \n" ;

    cout << "Data : ";

    while (!stackKata.empty())
    {
       cout << stackKata.top() << " " ;
       stackKata.pop();
    }
    
    return 0;
}
