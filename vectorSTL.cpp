#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> numbers;
    numbers.push_back(0);

    for(int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    /* for (auto it = numbers.begin(); it!=numbers.end(); it++){
        // cout << it << endl;
        cout << *it << endl; // value of the element
        cout << &it << endl; // address of the iteerator
        cout << &(*it) << endl; // address of the element
    } */

    numbers.insert(numbers.begin() + 5, 88); // insert 88 at position 5
    numbers.erase(numbers.begin() + 5); // remove element at position 5
    numbers.pop_back(); // remove element at the back of the vector

    for (auto n : numbers)
        cout << n << endl;

}
