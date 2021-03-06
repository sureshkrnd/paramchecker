#include "paramchecker.h"
#include <gtest/gtest.h>
 
// TEST(VitalsTest, when_a_vital_is_in_range_vital_range_check_is_ok) {
//     VitalRangeCheck vitalChecker(60, 100);
//     ASSERT_EQ(vitalChecker.measurementIsOk(70), true);
// }

// TEST(VitalsTest, when_a_vital_is_off_limit_it_is_reported_with_vital_id) { 
//     std::vector<Measurement> measurements = {
//         {bpm, 100},
//         {spo2, 50},
//         {respRate, 50},
//     };
//     auto results = vitalsAreOk(measurements);
//     ASSERT_EQ(results.size(), sizeof(measurements)/sizeof(measurements[0]));
//     ASSERT_EQ(results[spo2], false);
//     ASSERT_EQ(results[bpm], true);
//     ASSERT_EQ(results[respRate], true);
// }

TEST(Vehicle_data_motor_temp, get_vehicle_data_motor_temp) {
    telematics input_data = { 300, measure::motor_temp, 35 };
    inventory vehicle_data = get_vehicle_measurements(input_data);
    ASSERT_EQ( 300, vehicle_data.vehicle_id );
    ASSERT_NEAR( 35, vehicle_data.motor_temp, 0.001 );
}

TEST(Vehicle_data_battery_temp, get_vehicle_data_battery_temp) {
    telematics input_data = { 500, measure::battery_temp, 45 };
    inventory vehicle_data = get_vehicle_measurements(input_data);
    ASSERT_EQ( 500, vehicle_data.vehicle_id );
    ASSERT_NEAR( 45, vehicle_data.battery_temp, 0.001 );
}

TEST(Vehicle_data_battery_pc, get_vehicle_data_battery_pc) {
    telematics input_data = { 700, measure::battery_pc, 55 };
    inventory vehicle_data = get_vehicle_measurements(input_data);
    ASSERT_EQ( 700, vehicle_data.vehicle_id );
    ASSERT_NEAR( 55, vehicle_data.battery_pc, 0.001 );
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

