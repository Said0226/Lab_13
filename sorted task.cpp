#include <iostream>
#include <string>
using namespace std;

struct Student {
    int sapID;
    string name;
    float assignmentScore;
    float quizScore;
    float totalMarks;
    char grade;
};


void bubbleSort(Student students[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (students[j].sapID > students[j + 1].sapID) {
              
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStudents(const Student students[], int n) {
    cout << "SAP ID\t\tName\t\tAssignment Score\tQuiz Score\tTotal Marks\tGrade\n";
    cout << "-------------------------------------------------------------------------------\n";
    for (int i = 0; i < n; ++i) {
        cout << students[i].sapID << "\t" << students[i].name << "\t" 
             << students[i].assignmentScore << "\t\t\t"
             << students[i].quizScore << "\t\t" 
             << students[i].totalMarks << "\t\t" 
             << students[i].grade << "\n";
    }
}

int main() {
    // Sample student data
    Student students[] = {
        {44391, "Zarar Khan", 6.375, 0.25, 0.0, 'F'},
        {44647, "Abdul Moiz Mansab", 6.75, 4.0, 3.5, 'F'},
        {47777, "Shabir Ahmad", 6.375, 1.25, 5.0, 'F'},
        {53759, "Ahmed Irtaza", 6.0, 4.0, 6.0, 'F'},
        {55181, "Asad Ullah", 10.5, 6.75, 13.0, 'F'},
        {55223, "Ahmed Aziz", 10.125, 5.25, 9.0, 'F'},
        {55225, "Uzair Baig", 10.5, 5.5, 16.0, 'F'},
        {55330, "Haider Nawaz Thabal", 10.5, 4.25, 8.5, 'F'},
        {55349, "Muhammad Hamza Shakeel", 6.75, 0.0, 0.0, 'F'},
        {55356, "Usman Afzal Minhas", 9.75, 1.25, 5.0, 'F'},
        {55405, "Shujaat Hussain", 10.125, 4.0, 6.5, 'F'},
        {55434, "Mahboob Rasheed", 10.5, 6.75, 7.0, 'F'},
        {55465, "Hafiz Muhammad Hamza", 10.5, 5.0, 9.0, 'F'},
        {55469, "Uzair Ahmed Qureshi", 9.75, 1.5, 7.5, 'F'},
        {55566, "Rafay Jadoon", 6.375, 3.0, 7.5, 'F'}
    };

    int n = sizeof(students) / sizeof(students[0]);

    // Display unsorted data
    cout << "Unsorted Student Records:\n";
    displayStudents(students, n);

    // Sort the data by SAP ID
    bubbleSort(students, n);

    // Display sorted data
    cout << "\nSorted Student Records by SAP ID:\n";
    displayStudents(students, n);

    return 0;
}
