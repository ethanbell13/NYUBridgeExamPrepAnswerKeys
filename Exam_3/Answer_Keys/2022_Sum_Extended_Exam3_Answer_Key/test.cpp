#include <fstream>
#include <iostream>
using namespace std;

void periodCountEllipses()
{
    string fileName;
    cout << "Please enter the file name: ";
    cin >> fileName;
    ifstream in(fileName);
    while (in.fail())
    {
        cout << "The file failed to open." << endl;
        cout << "Please enter the file name: ";
        cin >> fileName;
        in.clear();
        in.open(fileName);
    }
    char c;
    bool inEllipsis = false;
    int periodCount = 0;
    int count = 0;
    while (!in.fail())
    {
        c = in.get();
        if (c == '.')
        {
            periodCount++;
            if (!inEllipsis)
                inEllipsis = true;
            // This else if statement would be removed.
            else if (periodCount == 3)
            {
                count++;
                periodCount = 0;
                inEllipsis = false;
            }
        }
        else if (inEllipsis)
        {
            // if (periodCount == 3)
            //     count++;
            inEllipsis = false;
            periodCount = 0;
        }
    }
    /*
    if(inEllipsis && periodCount == 3)
        count++;
    */
    cout << "The file contains " << count << " ellipses." << endl;
}

int main()
{
    periodCountEllipses();
    return 0;
}