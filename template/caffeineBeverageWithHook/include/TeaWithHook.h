#ifndef TEAWITHHOOK_H
#define TEAWITHHOOK_H

#include "CaffeineBeverageWithHook.h"
#include <cctype>
#include "istream"
#include <iostream>
#include <string>

class TeaWithHook : public CaffeineBeverageWithHook
{
    public:
        void brew() override { std::cout << "Steeping the tea\n"; }
		void addCondiments() override { std::cout << "Adding Lemon\n"; }
		bool customerWantCondiment() override {
            std::string answer = getUSerInput();
            if (std::tolower(answer[0]) == 'y')
                return true;
            return false;
		}
        std::string getUSerInput() {
            std::string answer = {};
            std::cout << "Would you lemon with your tea (y/n)? ";
            if (!std::getline(std::cin, answer))
                std::cerr << "IO error trying to read your answer\n";
            if (answer.empty())
                return "no";
            return answer;
		}

    protected:

    private:
};

#endif // TEAWITHHOOK_H
