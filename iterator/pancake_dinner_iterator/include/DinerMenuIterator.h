#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <array>

class DinerMenuIterator : public Iterator<MenuItem>
{
    public:
        static constexpr size_t MAXIMUM = 6;
        DinerMenuIterator(std::array<MenuItem, MAXIMUM> &i) : items(i) {}
        MenuItem* next() override {
            return &items[position++];
        }
        bool hasNext() {
            return items.size() > position;
        }

    protected:

    private:
		std::array<MenuItem, MAXIMUM> &items;
		std::array<MenuItem, MAXIMUM>::size_type position = 0;

};

#endif // DINERMENUITERATOR_H
