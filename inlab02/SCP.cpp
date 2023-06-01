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

SCP createSCP(int id, int objClass, string speConProcedures, string description, string *addendums, int numAddendums)
{
    SCP newSCP;

    newSCP.id = id;
    newSCP.objClass = objClass;
    newSCP.speConProcedures = speConProcedures;
    newSCP.description = description;
    newSCP.numAddendums = numAddendums;
    newSCP.addendums = addendums;

    return newSCP;
}

string convertToString(SCP obj)
{
    string s = "";
    s += "Item #: SCP-";
    if (obj.id < 10)
        s += "00";
    else if (obj.id < 100)
        s += "0";
    s += to_string(obj.id) + "\n";

    s += "Object Class: ";
    switch (obj.objClass)
    {
    case 0:
        s += "Safe";
        break;
    case 1:
        s += "Euclid";
        break;
    case 2:
        s += "Keter";
        break;
    default:
        break;
    }
    s += "\n";

    s += "Special Containment Procedures: " + obj.speConProcedures + "\n";
    s += "Description: " + obj.description + "\n";

    for (int i = 0; i < obj.numAddendums; i++)
        s += obj.addendums[i] + "\n";

    return s;
}

SCP *cloneSCP(SCP *original)
{
    SCP *clone;

    clone->id = original->id;
    clone->objClass = original->objClass;
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;
    clone->numAddendums = original->numAddendums;

    // deep copy addendums array
    clone->addendums = new string[original->numAddendums];
    for (int i = 0; i < original->numAddendums; i++)
    {
        clone->addendums[i] = original->addendums[i];
    }

    return clone;
}

int main()
{
    string *addendums = new string[2];
    addendums[0] = "Document #055-1: An Analysis of SCP-055\nThe author puts forward the hypothesis that SCP-055 was never formally acquired.";
    addendums[1] = "Document #055-2: Report of Dr. John Marachek\nSurvey team #19-055-127BXE was successfully able to enter SCP-055's container and ascertain the appearance.";

    SCP obj{55, 2, "Object is kept within a five (5) by five (5) by two point five (2.5) meter square room.", "All known information about the object is that it is not round.", addendums, 2};

    cout << convertToString(obj);

    delete[] addendums;
    return 0;
}