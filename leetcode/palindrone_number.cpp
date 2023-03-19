#include <iostream>
#include <string>

using namespace std;

bool isPolindrome(int x)
{
    int n = 0;
    string numString = to_string(x);
    int y = numString.length() -1; // get rid of carriage character
    
    while (n <= y)
    {
        //cout << " num at n " << numString.at(n);
        //cout << " num at y " << numString.at(y);
        
       if(numString.at(n) != numString.at(y)) return false;

        n++;
        y--;
    }
    return true;
    
}

int main()
{
    int num = 121;

    bool p = isPolindrome(num);
    if(p == true){
        cout << "It is Palindrome !" << endl;
    }
    else{
        cout << "It is NOT Palindrome !"<< endl;
    }

}