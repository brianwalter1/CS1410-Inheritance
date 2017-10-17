//
// Created by Brian Walter on 10/17/2017.
//

#include "counter.h"
// Doxygen Comments. Type /*! or /** followed by enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count  : Initial Counter
 */
counter::counter(unsigned int count) : count(count) {}

/*!
 *  Counter: Default Constructor
 */
counter::counter(): count(0) {}

/*!
 * getCount : Getter for count variable
 * @return : Current Count
 */
unsigned int counter::getCount() const {
    return count;
}

/**
 *  setCount: set current count
 * @param count : Number to set counter
 */
void counter::setCount(unsigned int count) {
    counter::count = count;
}

/**
 *  ++ Operator: Increments counter
 * @return : ++counter
 */
counter counter::operator++() {
    return counter(++count);
}

/**
 * -- Operator: Decrements counter
 * @return : --counter
 */
counter countDown::operator--() {
    return counter(--count);
}

/**
 *  countDown Default Constructor
 */
countDown::countDown() : counter() {}

/**
 * countDown 1 parameter constructor
 * @param count : Initial Counter
 */
countDown::countDown(unsigned int count) : counter(count) {}
