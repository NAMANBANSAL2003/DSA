#ifndef PROBLEM_H
#define PROBLEM_H

#include <string>
using namespace std;

struct Problem
{
    string name;
    string topic;
    string difficulty;
    bool solved;

    Problem() {}

    Problem(string n, string t, string d)
    {
        name = n;
        topic = t;
        difficulty = d;
        solved = false;
    }
};

#endif