#include "ens215.h"

using namespace ScioSense;

ENS215 ens215;

int main()
{
    if (ens215.singleShotMeasure() == ENS215::Result::STATUS_OK)
    {
        float temperatureCelsius = ens215.getTempCelsius();
        float humidityPercent    = ens215.getHumidityPercent();

        std::cerr << "Sensor Begin Error" << std::endl;
        return 1;
    }
}