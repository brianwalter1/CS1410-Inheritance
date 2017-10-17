//
// Created by Brian Walter on 10/17/2017.
//

#ifndef INHERITANCE_COUNTER_H
#define INHERITANCE_COUNTER_H


class counter {
protected:
    unsigned int count;
public:
    counter();                    //Default Constructor
    counter(unsigned int count);  //Constructor 1 arg
    unsigned int getCount() const;
    void setCount(unsigned int count);
    counter operator ++();
};

class countDown : public counter{
public:
    countDown();
    countDown(unsigned int count);
    counter operator --();
};

#endif //INHERITANCE_COUNTER_H
