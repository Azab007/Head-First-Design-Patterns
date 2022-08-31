#ifndef CAFFEINEBEVERAGEWITHHOOK_H
#define CAFFEINEBEVERAGEWITHHOOK_H


class CaffeineBeverageWithHook
{
    public:
        virtual void prepareRecipe() final {
            boilWater();
            brew();
            pourInCup();
            if (customerWantCondiment())
                addCondiments();
}

        virtual ~CaffeineBeverageWithHook() = default;

    protected:
		virtual void brew() = 0;
		virtual void addCondiments() = 0;
        virtual bool customerWantCondiment() { return true; }
		void boilWater() { std::cout << "Boiling water\n"; }
		void pourInCup() { std::cout << "Pouring into cup\n"; }
    private:
};

#endif // CAFFEINEBEVERAGEWITHHOOK_H
