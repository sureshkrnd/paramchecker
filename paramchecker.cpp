bool vital_bpm( float bpm ){
  if( ( bpm<70 ) || (bpm >150) ){
    return false;
  }
  return true;
}

bool vital_spo2( float spo2 ){
  if( spo2<80 ){
    return false;
  }
  return true;
}

bool vital_resp( float respRate ){
  if( ( respRate<30 ) || (respRate >60) ){
    return false;
  }
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool bpm_ok, spo2_ok, respRate_ok;
  bpm_ok = vital_bpm(bpm);
  spo2_ok = vital_spo2(spo2);
  respRate_ok = vital_resp(respRate);
  return bpm_ok && spo2_ok && respRate_ok;
}
