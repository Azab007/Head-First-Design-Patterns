#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H


#include "Command.h"
#include "CeilingFan.h"
#include <string>

class CeilingFanHighCommand : public CeilingFan
{
    public:
		CeilingFanHighCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override {
			prevSpeed = ceilingFan->getSpeed();
            ceilingFan->high();
		}
		void undo() override {
		switch (prevSpeed) {
		case CeilingFan::Speed::HIGH:
			ceilingFan->high();
			break;
		case CeilingFan::Speed::MEDIUM:
			ceilingFan->medium();
			break;
		case CeilingFan::Speed::LOW:
			ceilingFan->low();
			break;
		case CeilingFan::Speed::OFF:
			ceilingFan->off();
			break;
		default:
			break;
	}
		}
		std::string getClassName() const override { return className; };

    protected:

    private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanHighCommand";
};

#endif // CEILINGFANHIGHCOMMAND_H
