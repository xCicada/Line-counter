//
// Created by Adonis on 24/02/2016.
//

#ifndef INC_2CPP_SUPCOUNT_LYON_204241_FILE_H
#define INC_2CPP_SUPCOUNT_LYON_204241_FILE_H
#include <string>

using namespace std;

class File
{

public:
    File();
    int lineCount = 0;

    string getExtension(string s);
    bool checkExtension(string fileName);
};

#endif //INC_2CPP_SUPCOUNT_LYON_204241_FILE_H
