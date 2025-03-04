#include "Student.h"

void Student::setname(const std::string& studentName) {
    name = studentName;
}

std::string Student::getname() const {
    return name;
}

void Student::setmate(float nota) {
    if (nota >= 1.0f && nota <= 10.0f)
        mate = nota;
}

float Student::getmate() const {
    return mate;
}

void Student::setengleza(float nota) {
    if (nota >= 1.0f && nota <= 10.0f)
        engleza = nota;
}

float Student::getengleza() const {
    return engleza;
}


void Student::setistorie(float nota) {
    if (nota >= 1.0f && nota <= 10.0f)
        istorie = nota;
}

float Student::getistorie() const {
    return istorie;
}

float Student::GetAverageGrade() const {
    return (mate + engleza + istorie) / 3.0f;
}
