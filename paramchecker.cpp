#include "paramchecker.h"
#include <vector>
#include <iostream>

// IVitalCheck* vitalCheckers[] = {
//   [bpm] = new VitalRangeCheck(70, 150),
//   [spo2] = new VitalRangeCheck(80, 100),
//   [respRate] = new VitalRangeCheck(30, 60),
//   [avgECG] = new VitalValueCheck(0),
// };

// std::vector<bool> vitalsAreOk(const std::vector<Measurement>& measurements) {
//   std::vector<bool> results;
//   for(auto t = measurements.begin(); t != measurements.end(); t++) {
//     bool vitalResult = vitalCheckers[t->id]->measurementIsOk(t->measured_value);
//     std::cout << "Vital-check result is " << vitalResult << std::endl;
//   }
//   return results;
// }

inventory get_vehicle_measurements( struct telematics input )
{
  inventory data;
  data.vehicle_id = input.vehicle_id;
  if( input.type == measure::motor_temp )
  {
    data.motor_temp = imput.measurement;
  }
  else if( input.type == measure::battery_pc )
  {
    data.battery_pc = imput.measurement;
  }
  else( input.type == measure::battery_temp )
  {
    data.battery_temp = imput.measurement;
  }
  return data;
}
