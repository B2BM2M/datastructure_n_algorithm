#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void readTextFile(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "Error: Could not open file " << filename << endl;
    }
}



void writeTextFile(string filename, vector<string> lines) {
    ofstream file(filename);
    if (file.is_open()) {
        for (string line : lines) {
            file << line << endl;
        }
        file.close();
    } else {
        cerr << "Error: Could not open file " << filename << endl;
    }
}


int main()
{
    readTextFile("example.txt");

    vector<string> lines = {"This is the first line.", "This is the second line.", "This is the third line."};
    writeTextFile("example2.txt", lines);

}
