#include <iostream>
#include "Student.h"
#include "CompareStudents.h"

int main() {
    Student student1, student2;

    student1.setname("Denisa");
    student1.setmate(9.5);
    student1.setengleza(8.0);
    student1.setistorie(7.5);

    student2.setname("Dumitru");
    student2.setmate(8.0);
    student2.setengleza(9.0);
    student2.setistorie(7.5);

    std::cout << "Student: " << student1.getname() << "\n";
    std::cout << "Mate: " << student1.getmate() << "\n";
    std::cout << "Engleza: " << student1.getengleza() << "\n";
    std::cout << "Istorie: " << student1.getistorie() << "\n";
    std::cout << "Media: " << student1.GetAverageGrade() << "\n";  
    std::cout << "\n";

    std::cout << "Student: " << student2.getname() << "\n";
    std::cout << "Mate: " << student2.getmate() << "\n";
    std::cout << "Engleza: " << student2.getengleza() << "\n";
    std::cout << "Istorie: " << student2.getistorie() << "\n";
    std::cout << "Media: " << student2.GetAverageGrade() << "\n"; 

    std::cout << "\nComparare studenti:\n";
    std::cout << "Comparare nume: " << CompareByName(student1, student2) << "\n";
    std::cout << "Compare by Math Grade: " << CompareByMathGrade(student1, student2) << "\n";
    std::cout << "Compare by English Grade: " << CompareByEnglishGrade(student1, student2) << "\n";
    std::cout << "Compare by History Grade: " << CompareByHistoryGrade(student1, student2) << "\n";
    std::cout << "Compare by Average Grade: " << CompareByAverageGrade(student1, student2) << "\n"; 

    return 0;
}
