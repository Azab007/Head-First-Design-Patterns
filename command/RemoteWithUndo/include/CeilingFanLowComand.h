#ifndef CEILINGFANLOWCOMAND_H
#define CEILINGFANLOWCOMAND_H
#include "Command.h"
#include "CeilingFan.h"
#include <string>

class CeilingFanLowComand : public CeilingFan
{
    public:
		CeilingFanLowCommand(CeilingFan *cf) : ceilingFan(cf) { }
		void execute() override {

			prevSpeed = ceilingFan->getSpeed();
            ceilingFan->low();
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
		std::string getClassName() const override { return className; }

    protected:

    private:
		CeilingFan *ceilingFan;
		CeilingFan::Speed prevSpeed;
		std::string className = "CeilingFanLowCommand";
};

#endif // CEILINGFANLOWCOMAND_H
