#include "Program.h"

int main(int argc, char *argv[])
{
    Folder folder;
    File file;
    string path;

    // use argument to retrieve path
    cout << "Welcome in SupCount" << endl;

    if (argv[1]) {
        path = argv[1];
        folder.folderExistence(path);
    } else {
        do {
            cout << "Enter folder location : " << endl; //
            cin >> path;
        } while (folder.folderExistence(path));
    }

    //see program.cpp
    countLines(folder, file);
}