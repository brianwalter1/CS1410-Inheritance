//
// Created by Brian Walter on 10/17/2017.
//

#include "counter.h"

counter::counter(unsigned int count) : count(count) {}

counter::counter(): count(0) {}

unsigned int counter::getCount() const {
    return count;
}

void counter::setCount(unsigned int count) {
    counter::count = count;
}

counter counter::operator++() {
    return counter(++count);
}

counter countDown::operator--() {
    return counter(--count);
}
