#ifndef TRACKER_H
#define TRACKER_H

#include <vector>
#include <iostream>
#include "problem.h"
#include "recommendation.h"
#include "filemanager.h"

using namespace std;

class Tracker
{
private:

    vector<Problem> problems;
    Recommendation recommender;
    FileManager fileManager;

public:

    void addProblem(string name, string topic, string difficulty)
    {
        Problem p(name, topic, difficulty);

        problems.push_back(p);
        recommender.addRecommendation(p);

        cout << "Problem added successfully\n";
    }

    void showProblems()
    {
        if(problems.empty())
        {
            cout << "No problems added yet\n";
            return;
        }

        for(int i=0;i<problems.size();i++)
        {
            cout << i+1 << ". "
                 << problems[i].name << " | "
                 << problems[i].topic << " | "
                 << problems[i].difficulty << " | "
                 << (problems[i].solved ? "Solved" : "Unsolved")
                 << endl;
        }
    }

    void markSolved(int index)
    {
        if(index>=0 && index<problems.size())
        {
            problems[index].solved = true;
            cout << "Marked as solved\n";
        }
        else
        {
            cout << "Invalid problem number\n";
        }
    }

    void showRecommendation()
    {
        recommender.showNext();
    }

    void save()
    {
        fileManager.saveProblems(problems);
        cout << "Progress saved\n";
    }

};

#endif