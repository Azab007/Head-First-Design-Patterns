#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
class Iterator
{
    public:
        virtual ~Iterator() = default;
        virtual T* next() = 0;
        virtual bool hasNext() = 0;
    protected:

    private:
};

#endif // ITERATOR_H
