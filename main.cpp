#include <iostream>
#include <fstream>

using namespace std;

// comment
string sizes[5] = {"tiny", "small", "big", "huge", "colossal"};

class files {
    public:
        string name;
};

int main() {
    files file;
    file.name = "text.txt";

    string food;

    cout << "What you ate today? ";
    getline(cin, food);

    ofstream trashbin(file.name);

    for (string size : sizes) {
        string text = "today i ate very " + size + " " + food + "\n";
        trashbin << text;
    }

    trashbin.close();

    return 0;
}