#include <iostream>
#include <string>
using namespace std;

struct SCP
{
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;
};

void addAddendum(SCP &obj, string addendum)
{
    int n = obj.numAddendums;
    string *newAddendums = new string[n + 1];
    for (int i = 0; i < n; i++)
    {
        newAddendums[i] = obj.addendums[i];
    }
    newAddendums[n] = addendum;
    delete[] obj.addendums;
    obj.addendums = newAddendums;
    obj.numAddendums++;
}

int main()
{

    cout << endl;
    system("pause");
    return 0;
}