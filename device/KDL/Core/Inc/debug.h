/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : debug.h
  * @Copyright		: luftaquila
  * @Author         : LCH, OMY, KH
  ******************************************************************************
  * @attention
  *
  * KDL STM32 firmware.
  *
  * KUST, 24KSAE
  * Kookmin University, Korea.
  ******************************************************************************
  */
/* USER CODE END Header */
#define CORE_INC_DEBUG_H_
#ifdef CORE_INC_DEBUG_H_


#ifdef DEBUG_MODE
/* DEBUG_MSG strings */
const char STR_LOG_LEVEL[][10] = { "FATAL", "ERROR", "WARN", "INFO", "DEBUG" };
const char STR_LOG_SOURCE[][15] = { "SYS", "CAN", "DIGITAL", "ANALOG", "ACCELEROMETER", "GPS" };

const char STR_SYS_SD_INIT[] = "SYS_SD_INIT";
const char STR_SYS_CORE_INIT[] = "SYS_CORE_INIT";
const char STR_SYS_SERIAL_INIT[] = "SYS_SERIAL_INIT";
const char STR_SYS_TELEMETRY_REMOTE[] = "SYS_TELEMETRY_REMOTE";
const char STR_SYS_TELEMETRY_RTC_FIX[] = "SYS_TELEMETRY_RTC_FIX";
const char STR_SYS_TELEMETRY_INIT[] = "SYS_TELEMETRY_INIT";
const char STR_CAN_INIT[] = "CAN_INIT";
const char STR_DIGITAL_INIT[] = "DIGITAL_INIT";
const char STR_ANALOG_INIT[] = "ANALOG_INIT";
const char STR_ACCELEROMETER_INIT[] = "ACCELEROMETER_INIT";
const char STR_GPS_INIT[] = "GPS_INIT";
const char STR_SYS_READY[] = "SYS_READY";
const char STR_SYS_SD_FAIL[] = "SYS_SD_FAIL";
const char STR_CAN_ERR_CANERR[] = "CAN_ERR_CANERR";
const char STR_CAN_ERR_RXMSGFAIL[] = "CAN_ERR_RXMSGFAIL";
const char STR_CAN_ERR_FIFOFULL[] = "CAN_ERR_FIFOFULL";

const char STR_DIGITAL_DATA[] = "DIGITAL_DATA";

const char STR_ANALOG_SYS[] = "ANALOG_SYS";
const char STR_ANALOG_DATA[] = "ANALOG_DATA";

const char STR_ACCELEROMETER_DATA[] = "ACCELEROMETER_DATA";

const char STR_GPS_POS[] = "GPS_POS";
const char STR_GPS_VEC[] = "GPS_VEC";
const char STR_GPS_TIME[] = "GPS_TIME";

const char *STR_LOG_KEY_SYS[] = {
  STR_SYS_SD_INIT, STR_SYS_CORE_INIT, STR_SYS_SERIAL_INIT, STR_SYS_TELEMETRY_REMOTE,
  STR_SYS_TELEMETRY_RTC_FIX, STR_SYS_TELEMETRY_INIT, STR_CAN_INIT, STR_DIGITAL_INIT,
  STR_ANALOG_INIT, STR_ACCELEROMETER_INIT, STR_GPS_INIT, STR_SYS_READY,
  STR_SYS_SD_FAIL, STR_CAN_ERR_CANERR, STR_CAN_ERR_RXMSGFAIL, STR_CAN_ERR_FIFOFULL
};
const char *STR_LOG_KEY_DIGITAL[] = { STR_DIGITAL_DATA };
const char *STR_LOG_KEY_ANALOG[] = { STR_ANALOG_SYS, STR_ANALOG_DATA };
const char *STR_LOG_KEY_ACCELEROMETER[] = { STR_ACCELEROMETER_DATA };
const char *STR_LOG_KEY_GPS[] = { STR_GPS_POS, STR_GPS_VEC, STR_GPS_TIME };

const char **STR_LOG_KEY[] = { STR_LOG_KEY_SYS, NULL, STR_LOG_KEY_DIGITAL, STR_LOG_KEY_ANALOG, STR_LOG_KEY_ACCELEROMETER, STR_LOG_KEY_GPS };
#endif

#endif /* CORE_INC_DEBUG_H_ */
