
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  if(bpm < 70) {
    return false;
  } else if(bpm > 150) {
    return false;
  } else if(spo2 < 80) {
    return false;
  } else if(respRate < 30) {
    return false;
  } else if(respRate > 60){
    return false;
  }
  return true;
}
