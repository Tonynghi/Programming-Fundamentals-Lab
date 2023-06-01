#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct Student
{
    double NMDT;
    double KTLT;
    double DSA;
    double PPL;
};

void studentGrading(string fileName)
{
    ifstream file(fileName);
    if (!file.is_open())
    {
        cout << "Failed to open the file." << endl;
        return;
    }

    int numStudents;
    file >> numStudents;
    file.ignore(); // Ignore the newline character after reading numStudents

    vector<Student> students;
    for (int i = 0; i < numStudents; i++)
    {
        Student student;
        file >> student.NMDT >> student.KTLT >> student.DSA >> student.PPL;
        students.push_back(student);
    }

    file.close();

    int countA = 0, countB = 0, countC = 0, countD = 0;
    for (const auto &student : students)
    {
        double avgScore = (student.NMDT + student.KTLT + student.DSA + student.PPL) / 4.0;

        if (avgScore >= 8 && student.NMDT >= 5 && student.KTLT >= 5 && student.DSA >= 5 && student.PPL >= 5)
        {
            countA++;
        }
        else if (avgScore >= 6.5 && student.NMDT >= 5 && student.KTLT >= 5 && student.DSA >= 5 && student.PPL >= 5)
        {
            countB++;
        }
        else if (avgScore >= 5 && student.NMDT >= 5 && student.KTLT >= 5 && student.DSA >= 5 && student.PPL >= 5)
        {
            countC++;
        }
        else
        {
            countD++;
        }
    }

    // Output the results
    cout << "A " << countA << endl;
    cout << "B " << countB << endl;
    cout << "C " << countC << endl;
    cout << "D " << countD << endl;
}
