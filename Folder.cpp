//
// Created by Adonis on 24/02/2016.
//

#include "Folder.h"

Folder::Folder() { }

bool Folder::folderExistence(string path) {
    struct stat stat1;
    if (stat(path.c_str(), &stat1) == 0) {
        setFolderPath(path);
        return false;
    } else {
        cout << "No such directory." << endl;
        return true;
    }
}

int Folder::isDirectory(const char *path) {
    //return 0 = file
    //return 1 = directory
    struct stat buf;
    if (stat(path, &buf) != 0)
        return 0;
    return S_ISDIR(buf.st_mode);
}