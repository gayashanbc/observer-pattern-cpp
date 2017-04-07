//
// Created by shan on 4/7/17.
//

#include "Client.hpp"

void Client::update(float temp, float humidity, float pressure) {
    // print the changed values
    std::cout << "---Client (" << id << ") Data---\tTemperature: " << temp
              << "\tHumidity: " << humidity
              << "\tPressure: " << pressure
              << std::endl;
}

Client::Client(int id) {
    this->id = id;
}
