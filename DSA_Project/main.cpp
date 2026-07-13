#include <iostream>
#include "tracker.h"
#include "menu.h"

using namespace std;

int main()
{
    Tracker tracker;

    int choice;

    while(true)
    {
        showMenu();
        cin >> choice;

        if(choice == 1)
        {
            string name, topic, difficulty;

            cin.ignore();

            cout << "Enter problem name: ";
            getline(cin,name);

            cout << "Enter topic: ";
            getline(cin,topic);

            cout << "Enter difficulty: ";
            getline(cin,difficulty);

            tracker.addProblem(name,topic,difficulty);
        }

        else if(choice == 2)
        {
            tracker.showProblems();
        }

        else if(choice == 3)
        {
            int index;

            cout << "Enter problem number: ";
            cin >> index;

            tracker.markSolved(index-1);
        }

        else if(choice == 4)
        {
            tracker.showRecommendation();
        }

        else if(choice == 5)
        {
            tracker.save();
        }

        else if(choice == 6)
        {
            cout << "Exiting program\n";
            break;
        }

        else
        {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}