#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <fstream>
#include <vector>
#include "problem.h"

using namespace std;

class FileManager
{
public:

    void saveProblems(vector<Problem>& problems)
    {
        ofstream file("problems.txt");

        for(auto &p : problems)
        {
            file << p.name << ","
                 << p.topic << ","
                 << p.difficulty << ","
                 << p.solved << endl;
        }

        file.close();
    }

};

#endif