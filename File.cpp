//
// Created by Adonis on 24/02/2016.
//

#include "File.h"

File::File() {

}

bool File::checkExtension(string extension) {
    if (extension == "c" || "cpp" || "java" || "php" || "html" || "css") {
        return true;
    }
    else return false;
}

std::string File::getExtension(string file) {

    int t = file.rfind('.', file.length());
    return(file.substr(t + 1, file.length()));

}



