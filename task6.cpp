#include <iostream>
using namespace std;

main()
{
    int time;
    int treat = 0;
    int untreat = 0;
    int doctors = 7;
    int patientamount;
        int totaltreated = 0;
        int totaluntreated = 0;

    cout << "enter test period of time: ";
    cin >> time;

    for (int i = 1; i <= time; i++)
    {
        cout << "enter amount of patients: ";
        cin >> patientamount;
        if ((i % 3) != 0)
        {
            if (patientamount > doctors)
            {
                untreat = patientamount - doctors;
                treat = patientamount - untreat;
            }
            else if (doctors > patientamount)
            {
                treat = patientamount;
                untreat = 0;
            }
        }
        if (i % 3 == 0)
        {
            if (untreat > treat)
            {
                doctors = doctors + 1;
            }

            if (patientamount > doctors)
            {
                untreat = patientamount - doctors;
                treat = patientamount - untreat;
            }
            else if (doctors > patientamount)
            {
                treat = patientamount;
                untreat = 0;
            }
        }

        totaltreated = treat + totaltreated;
        totaluntreated = untreat + totaluntreated;


    }
    cout << "treated patients: " << totaltreated << endl;
    cout << "untreated patients: " << totaluntreated << endl;
}