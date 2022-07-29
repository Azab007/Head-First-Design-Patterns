#include "Duck.h"
#include "MallardDuck.h"
#include <memory>
#include "ModelDuck.h"
#include "MuteDuck.h"
int main()
{
    using DuckPtr = std::unique_ptr<Duck>;
	DuckPtr mallard = std::make_unique<MallardDuck>();
	mallard->performQuack();
	mallard->performFly();


    DuckPtr model = std::make_unique<ModelDuck>();
	model->performFly();
	model->performQuack();

    DuckPtr muteduck = std::make_unique<MuteDuck>();
	muteduck->performFly();
	muteduck->performQuack();
	muteduck->display();

    return 0;
}
