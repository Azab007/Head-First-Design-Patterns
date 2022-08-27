#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
#include <string>
class Light
{
    public:
		Light(const std::string &l) : location(l) { }
		void on(){
            level = 100;
            std::cout << location << " Light is On\n";
		}
		void off() {
            level = 0;
            std::cout << location << " Light is Off\n";
		}
		void dim(int l){
            level = l;
            if (level == 0)
                off();
            else
                std::cout << "Light is dimmed to " << level << "%\n";
		}
		int getLevel() const { return level; }

    protected:

    private:
        std::string location;
		int level;
};

#endif // LIGHT_H
