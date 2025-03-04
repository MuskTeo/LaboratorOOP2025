#include "CompareStudents.h"

int CompareByName(const Student& s1, const Student& s2) {
    if (s1.getname() < s2.getname()) {
        return -1;
    }
    if (s1.getname() > s2.getname()) {
        return 1;
    }
    return 0;
}
int CompareByMathGrade(const Student& s1, const Student& s2) {
    if (s1.getmate() < s2.getmate()) {
        return -1;
    }
    if (s1.getmate() > s2.getmate()) {
        return 1;
    }
    return 0;
}

int CompareByEnglishGrade(const Student& s1, const Student& s2) {
    if (s1.getengleza() < s2.getengleza()) {
        return -1;
    }
    if (s1.getengleza() > s2.getengleza()) {
        return 1;
    }
    return 0;
}

int CompareByHistoryGrade(const Student& s1, const Student& s2) {
    if (s1.getistorie() < s2.getistorie()) {
        return -1;
    }
    if (s1.getistorie() > s2.getistorie()) {
        return 1;
    }
    return 0;
}

int CompareByAverageGrade(const Student& s1, const Student& s2) {
    if (s1.GetAverageGrade() < s2.GetAverageGrade()) {
        return -1;
    }
    if (s1.GetAverageGrade() > s2.GetAverageGrade()) {
        return 1;
    }
    return 0;
}
