#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrom(const string & str){
    stack<char> charStack;
    string filteredStr;

    for (char ch : str){
        if ((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z'))
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 'a' - 'A';
            }
            filteredStr += ch;
            charStack.push(ch);
        }
        
    }

    for(char ch : filteredStr){
        if (charStack.top() != ch)
        {
           return false;
        }
        charStack.pop();
    }
    return true;
}

int main(){
    string input;

    cout << "Masukan Kalimat : " << endl;
    getline(cin, input);

    if (isPalindrom (input))
    {
       cout << "Kalimat tersebut adalah palindrom. " << endl;
    }else{
        cout << "Kalimat tersebut bukan palindrom" <<endl;
    }
    return 0;
}