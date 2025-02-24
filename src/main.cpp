#include "ens215.h"

using namespace ScioSense;

ENS215 ens215;

int main()
{
    if (ens215.singleShotMeasure() == ENS215::Result::STATUS_OK)
    {
        float temperatureCelsius = ens215.getTempCelsius();
        float humidityPercent    = ens215.getHumidityPercent();

        std::cout << "Temp and Humidity" << std::endl;
        std::cout << temperatureCelsius << std::endl;
        std::cout << humidityPercent << std::endl;
        return 1;
    }
    else {
        std::cout << "Error" << std::endl;
        return -1;
    }
}