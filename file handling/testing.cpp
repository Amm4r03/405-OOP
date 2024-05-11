#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("testingFile.txt");

    file << "this is a sentence that im expecting to end up in the text file that ive made\n";
    file.close();
    return 0;
}