#pragma once
#include <string>

class Student {
private:
    std::string name;
    float mate, engleza, istorie;

public:
    void setname(const std::string& name);
    void setmate(float nota);
    void setengleza(float nota);
    void setistorie(float nota);

    std::string getname() const;
    float getmate() const;
    float getengleza() const;
    float getistorie() const;

    float GetAverageGrade() const;  
};

