#include <iostream>
#include <vector>
std::vector<int> solution(std::vector<int> ids, std::vector<int> grades, int &max);
void readInput(std::vector<int> &ids, std::vector<int> &grades);
void printResults(std::vector<int> maxIds, int max);
int main()
{
    using namespace std;
    vector<int> ids, grades, maxIds;
    int max;
    readInput(ids, grades);
    maxIds = solution(ids, grades, max);
    printResults(maxIds, max);
}
void readInput(std::vector<int> &ids, std::vector<int> &grades)
{
    using namespace std;
    cout << "Please enter a non-empty sequence of lines.\n"
         << "Each line should have a student ID and their grade (0-100),\n"
         << "separated by a space.\n"
         << "To indicate the end of the input, enter -1 as a student ID:\n";
    int id, grade;
    cin >> id;
    while (id != -1)
    {
        cin >> grade;
        ids.push_back(id);
        grades.push_back(grade);
        cin >> id;
    }
}
std::vector<int> solution(std::vector<int> ids, std::vector<int> grades, int &max)
{
    using namespace std;
    vector<int> maxIds;
    max = 0;
    for (int i = 0; i < ids.size(); i++)
        if (grades.at(i) > max)
        {
            max = grades.at(i);
            maxIds.clear();
            maxIds.push_back(ids.at(i));
        }
        else if (grades.at(i) == max)
            maxIds.push_back(ids.at(i));
    return maxIds;
}
void printResults(std::vector<int> maxIds, int max)
{
    using namespace std;
    cout << "The highest grade is " << max << ".\n"
         << "The students with grade " << max << " are: ";
    for (int i = 0; i < maxIds.size(); i++)
        cout << maxIds.at(i) << " ";
    cout << "." << endl;
}