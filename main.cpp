#include <iostream>
#include "WeatherData.hpp"
#include "Client.hpp"


int main() {
    WeatherData weatherStation;
    Client one(1), two(2), three(3);

    float temp, humidity, pressure;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);

    std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.temp = temp;
    weatherStation.humidity = humidity;
    weatherStation.pressure = pressure;

    weatherStation.notifyObservers();
    std::cout << std::endl;

    weatherStation.removeObserver(&two);

    std::cout << "\n\nEnter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.temp = temp;
    weatherStation.humidity = humidity;
    weatherStation.pressure = pressure;

    weatherStation.notifyObservers();
    std::cout << std::endl;

    return 0;
}