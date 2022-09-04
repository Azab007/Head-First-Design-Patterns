#ifndef PANCAKEHOUSEMENUITERATOR_H
#define PANCAKEHOUSEMENUITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <list>
#include <vector>
class PancakeHouseMenuIterator : public Iterator<MenuItem>
{
    public:
		PancakeHouseMenuIterator(std::list<MenuItem> &i) :
			items(i), iter(items.begin()) { }
		MenuItem* next() override { return &*iter++; }
		bool hasNext() override { return iter != items.cend(); }

    protected:

    private:
        std::list<MenuItem> &items;
		std::list<MenuItem>::iterator iter;
};

#endif // PANCAKEHOUSEMENUITERATOR_H
