#ifndef VOICE_H
#define VOICE_H

#include "ble.h"

#ifdef __cplusplus
extern "C" {
#endif

#define VOICE_BUSY_STATUS_PIN 7 // busy�ܽű��
#define VOICE_SDA_PIN  6 // SDA�ܽű��

#define RTC1_TICKS_PER_SECOND 32768 // RTC1ÿ���񶯴���
#define RTC1_TICKS_PER_MS ((int)(RTC1_TICKS_PER_SECOND/1000)) // RTC1ÿһ�����񶯴���

#define VOICE_SDA_START_LOW_MS 5 // ���ݴ�������ʱ�����͹ܽŶ��ٺ���
#define VOICE_SDA_START_LOW_TICKS (RTC1_TICKS_PER_MS*VOICE_SDA_START_LOW_MS) // ticks����


#define VOICE_SDA_DATA_SHORT_PART ((int)(RTC1_TICKS_PER_MS/2)) // ���ݴ���ʱ����
#define VOICE_SDA_DATA_LONG_PART (VOICE_SDA_DATA_SHORT_PART*3) // ���ݴ���ʱ����

// init voice GPIOs
uint32_t voice_init();

uint32_t voice_play(uint32_t recordID);

uint32_t voice_stop();

#ifdef __cplusplus
}
#endif

#endif /*VOICE_H*/
