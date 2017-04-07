//
// Created by shan on 4/7/17.
//

#ifndef OBSERVER_PATTERN_OBSERVER_HPP
#define OBSERVER_PATTERN_OBSERVER_HPP

/**
 * Interface for the Observer
 */
class Observer {

public:

    /**
     * Update the state of this observer
     * @param temp new temperaure
     * @param humidity new humidity
     * @param pressure new pressure
     */
    virtual void update(float temp, float humidity, float pressure) = 0;

};


#endif //OBSERVER_PATTERN_OBSERVER_HPP
