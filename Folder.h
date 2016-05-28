//
// Created by Adonis on 24/02/2016.
//

#ifndef INC_2CPP_SUPCOUNT_LYON_204241_FOLDER_H
#define INC_2CPP_SUPCOUNT_LYON_204241_FOLDER_H
#include <string>
#include <iostream>
#include <sys/stat.h> // for files
#include <sys/types.h> // Unix system


using namespace std;

class Folder
{
private:
    string folderPath;

public:
    Folder();

    void setFolderPath(string &path)
    {
        Folder::folderPath = path;
    }

    string getFolderPath()
    {
        return folderPath;
    }

    bool folderExistence(string path);
    int isDirectory(const char *path);
};

#endif //INC_2CPP_SUPCOUNT_LYON_204241_FOLDER_H