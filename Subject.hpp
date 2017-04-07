//
// Created by shan on 4/7/17.
//

#ifndef OBSERVER_PATTERN_SUBJECT_HPP
#define OBSERVER_PATTERN_SUBJECT_HPP


#include "Observer.hpp"

/**
 * Interface for the Subject
 */
class Subject {

public:

    /**
     * Register an observer
     * @param observer the observer object to be registered
     */
    virtual void registerObserver(Observer *observer) = 0;

    /**
     * Unregister an observer
     * @param observer the observer object to be unregistered
     */
    virtual void removeObserver(Observer *observer) = 0;

    /**
     * Notify all the registered observers when a change happens
     */
    virtual void notifyObservers() = 0;

};


#endif //OBSERVER_PATTERN_SUBJECT_HPP
