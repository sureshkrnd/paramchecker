#include <vector>
#include <limits>
#include <cmath>

// enum VITAL_ID {
//   bpm,
//   spo2,
//   respRate,
//   avgECG
// };

// struct Measurement{
//     VITAL_ID id;
//     float measured_value;
// };

// class IVitalCheck {
//   public:
//     virtual bool measurementIsOk(float measurement) = 0; //pure virtual
// };

// class VitalRangeCheck: public IVitalCheck {
//   public:
//     explicit VitalRangeCheck(float lower, float upper) {
//       m_lower = lower;
//       m_upper = upper;
//     }
//     virtual bool measurementIsOk(float measurement) {
//       return (measurement >= m_lower && measurement <= m_upper);
//     }
//   private:
//     float m_lower;
//     float m_upper;
// };

// class VitalValueCheck: public IVitalCheck {
//   public:
//     explicit VitalValueCheck(float alarmValue) {
//       m_alarmValue = alarmValue;
//     }
//     virtual bool measurementIsOk(float measurement) {
//       return std::abs(measurement - m_alarmValue) < 0.001;
//     }
//   private:
//     float m_alarmValue;
// };

// std::vector<bool> vitalsAreOk(const std::vector<Measurement>& measurements);

enum measure{
  motor_temp,
  battery_pc,
  battery_temp
};

struct telematics{
  int vehicle_id;
  measure type;
  float measurement;
};

struct inventory{
	int vehicle_id;
	float motor_temp;
	float battery_pc;
	float battery_temp;
};

inventory get_vehicle_measurements( telematics input );

