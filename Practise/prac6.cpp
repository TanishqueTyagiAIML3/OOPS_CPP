#include <iostream>
using namespace std;

class ResultAnalyzer;  

class StudentResult {
private:
    int rollNo;
    string name;
    int m1, m2, m3;

    static int totalStudents;

public:
    // Parameterized Constructor
    StudentResult(int r, string n, int a, int b, int c) {
        rollNo = r;
        name = n;
        m1 = a;
        m2 = b;
        m3 = c;
        totalStudents++;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult() {
        cout << "Student object destroyed" << endl;
    }
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
public:
    void showResult(StudentResult s) {
        int total = s.m1 + s.m2 + s.m3;
        float percentage = total / 3.0;

        cout << "\nRoll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    StudentResult s1(101, "Tanishque", 80, 75, 90);
    StudentResult s2(102, "Rahul", 30, 35, 40);

    ResultAnalyzer r;

    r.showResult(s1);
    r.showResult(s2);

    StudentResult::showTotalStudents();

    return 0;
}