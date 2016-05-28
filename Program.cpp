//
// Created by Adonis on 04/03/2016.
//

#include "Program.h"
#include <dirent.h> // for directories
#include <fstream>

void countLines(Folder folder, File file)
{
    DIR *dpdf;
    struct dirent *epdf;

    dpdf = opendir(folder.getFolderPath().c_str());
    if (dpdf != NULL){
        while (epdf = readdir(dpdf)) {

            //sous dossiers
            std::string subpath = folder.getFolderPath().c_str() + string("/") + string(epdf->d_name);
            if (folder.isDirectory(subpath.c_str()) == 1 && string(epdf->d_name) != "." && string(epdf->d_name) != "..") {
                DIR *subdpdf;
                struct dirent *subepdf;
                subdpdf = opendir(subpath.c_str());

                if (subdpdf != NULL){
                    while (subepdf = readdir(subdpdf)){
                        if (file.checkExtension(file.getExtension(subepdf->d_name))) {
                            int lines = 0;
                            std::string currentFilePath = subpath + string("/") + string(subepdf->d_name);
                            ifstream currentFile(currentFilePath);
                            std::string linestr;
                            while (getline(currentFile, linestr))
                            {
                                if (!linestr.empty())
                                    lines++;
                            }
                            file.lineCount += lines;
                        }
                    }
                }
                closedir(subdpdf);
            }

            //fichiers
            if (file.checkExtension(file.getExtension(epdf->d_name))) {
                //Extension autorisée
                int lines = 0;
                std::string currentFilePath = folder.getFolderPath().c_str() + string("/") + string(epdf->d_name);
                ifstream currentFile(currentFilePath);

                std::string linestr;
                while (getline(currentFile, linestr))
                {
                    if (!linestr.empty())
                        lines++;
                }
                file.lineCount += lines;
            }

        }
    }
    closedir(dpdf);

    cout << "Nombre de lignes: " << file.lineCount << endl;

}
