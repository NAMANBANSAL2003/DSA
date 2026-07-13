#ifndef RECOMMENDATION_H
#define RECOMMENDATION_H

#include <queue>
#include <iostream>
#include "problem.h"

using namespace std;

class Recommendation
{
private:
    queue<Problem> recQueue;

public:

    void addRecommendation(Problem p)
    {
        recQueue.push(p);
    }

    void showNext()
    {
        if(recQueue.empty())
        {
            cout << "No recommendations available\n";
            return;
        }

        Problem p = recQueue.front();

        cout << "\nNext Recommended Problem:\n";
        cout << p.name << " | " << p.topic << " | " << p.difficulty << endl;
    }
};

#endif