#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

#include <stdexcept>
#include <list>
class MenuComponent
{
    public:
        virtual void add(MenuComponent *menuComponent) {
        throw std::invalid_argument("add(): Unsupported Operation");
        };
		virtual void remove(MenuComponent *menuComponent) {
			throw std::invalid_argument("remove(): Unsupported Operation"); }
		virtual MenuComponent* getChid(int i) const {
			throw std::invalid_argument("getChid(): Unsupported Operation"); }
		virtual std::string getName() const {
			throw std::invalid_argument("getName(): Unsupported Operation"); }
		virtual std::string getDescription() const {
			throw std::invalid_argument("getDescription(): Unsupported Operation"); }
		virtual double getPrice() const {
			throw std::invalid_argument("getPrice(): Unsupported Operation"); }
		virtual bool isVegetarian() const {
			throw std::invalid_argument("isVegetarian(): Unsupported Operation"); }
		virtual void print() const {
			throw std::invalid_argument("print(): Unsupported Operation"); }

        virtual ~MenuComponent() = default;

    protected:

    private:
};

#endif // MENUCOMPONENT_H
