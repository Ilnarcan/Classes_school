#ifndef _HUMAN_HPP_ 
#define _HUMAN_HPP_

#include <string>

enum en_sex {male, female};

class Human {

    public:
        Human(std::string name, std::string second_name, int age, en_sex sex)
            : name(name), second_name(second_name), age(age), sex(sex) {}

    int get_age() {
        return age;
    }


    private:
  
        std::string name;
        std::string second_name;
        int age;
        en_sex sex;

}

#endif