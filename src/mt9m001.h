#ifndef MT9M001_H
#define MT9M001_H

#include<stdint.h> 
#include "i2c.h"


#define MT9M001_GLOBAL_GAIN_STR         "0x35"

#define MT9M001_CHIP_VERSION            0x00
#define MT9M001_ROW_START               0x01
#define MT9M001_COLUMN_START            0x02
#define MT9M001_WINDOW_HEIGHT           0x03
#define MT9M001_WINDOW_WIDTH            0x04
#define MT9M001_HORIZONTAL_BLANKING     0x05
#define MT9M001_VERTICAL_BLANKING       0x06
#define MT9M001_OUTPUT_CONTROL          0x07
#define MT9M001_SHUTTER_WIDTH           0x09
#define MT9M001_FRAME_RESTART           0x0b
#define MT9M001_SHUTTER_DELAY           0x0c
#define MT9M001_RESET                   0x0d
#define MT9M001_READ_OPTIONS1           0x1e
#define MT9M001_READ_OPTIONS2           0x20
#define MT9M001_GLOBAL_GAIN             0x35
#define MT9M001_CHIP_ENABLE             0xF1
#define MT9M001_BLACK_LEVEL             0x62

#define MT9M001_MAX_WIDTH               1280
#define MT9M001_MAX_HEIGHT              1024
#define MT9M001_MIN_WIDTH               48
#define MT9M001_MIN_HEIGHT              32
#define MT9M001_COLUMN_SKIP             20
#define MT9M001_ROW_SKIP                12

#define MT9M001_ADDR_STR "0x5d"
#define MT9M001_ADDR 0x5d

int check_camera_running();
int set_camera_lock();
int check_gain();
void mt9m001_init_readout(uint16_t gain);

#endif
