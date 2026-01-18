#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
    double grade;
};

void addStudent(list<Student>& students) {
    Student s;
    std::cout << "Enter name: ";
    std::cin >> s.name;
    std::cout << "Enter age: ";
    std::cin >> s.age;
    std::cout << "Enter grade: ";
    std::cin >> s.grade;

    students.push_back(s);
}
void ShowStudent(const list<Student>& students)
{
    if (students.empty())
    {
        cout << "List is empty\n";
        return;
    }
    for (const auto& s : students)
    {
        cout << s.name << "|" << s.age << "|" << s.grade << "\n";
    }
}
void DeleteStudent(list<Student>& students)
{
    string name;
    cout << "Name: ";
    cin >> name;

    students.remove_if([&](const Student& s) {
        return s.name == name;
        });
}

void findStudent(const list<Student>& student)
{
    string name;
    cout << "Enter to fuid";
    cin >> name;

    for (const auto& s : student)
    {
        if (s.name == name)
        {
            cout << "Foud: "
                << s.name << "| "
                << s.age << " | "
                << s.grade << endl;
            return;
        }

    }
    cout << "Student no found\n";

}


int main()
{
    setlocale(LC_ALL, "Ukrainian");
    std::list<Student> students;
    int choice;

    do {
        std::cout << "\n--- MENU ---\n";
        std::cout << "1. Add student\n";
        std::cout << "2. Show students\n";
        std::cout << "3. Delete student\n";
        std::cout << "4. Find student\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            addStudent(students);
            break;
        case 2:
            ShowStudent(students);
            break;
        case 3:
            DeleteStudent(students);
            break;
        case 4:
            findStudent(students);
            break;
        case 0:
            std::cout << "Exit...\n";
            break;
        default:
            std::cout << "Wrong choice!\n";
        }

    } while (choice != 0);

    return 0;
}