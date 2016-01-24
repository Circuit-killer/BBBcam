#ifndef imx291_H
#define imx291_H

#include<stdint.h> 
#include "i2c.h"


#define imx291_GLOBAL_GAIN_STR         "0x35"

#define imx291_CHIP_VERSION            0x00
#define imx291_ROW_START               0x01
#define imx291_COLUMN_START            0x02
#define imx291_WINDOW_HEIGHT           0x03
#define imx291_WINDOW_WIDTH            0x04
#define imx291_HORIZONTAL_BLANKING     0x05
#define imx291_VERTICAL_BLANKING       0x06
#define imx291_OUTPUT_CONTROL          0x07
#define imx291_SHUTTER_WIDTH           0x09
#define imx291_FRAME_RESTART           0x0b
#define imx291_SHUTTER_DELAY           0x0c
#define imx291_RESET                   0x0d
#define imx291_READ_OPTIONS1           0x1e
#define imx291_READ_OPTIONS2           0x20
#define imx291_GLOBAL_GAIN             0x35
#define imx291_CHIP_ENABLE             0xF1
#define imx291_BLACK_LEVEL             0x62

#define imx291_MAX_WIDTH               1280
#define imx291_MAX_HEIGHT              1024
#define imx291_MIN_WIDTH               48
#define imx291_MIN_HEIGHT              32
#define imx291_COLUMN_SKIP             20
#define imx291_ROW_SKIP                12

#define imx291_ADDR_STR "0x5d"
#define imx291_ADDR 0x5d

int check_camera_running();
int set_camera_lock();
int check_gain();
void imx291_init_readout(uint16_t gain);

#endif
