﻿/*
 * bitmap_char.h
 *
 * Created: 2019-12-19 오전 12:53:16
 *  Author: kimy0
 */ 


#ifndef BITMAP_CHAR_H_
#define BITMAP_CHAR_H_

#include <avr/pgmspace.h>

const unsigned char main_char_front[] PROGMEM = {
	0x00,0x00,
	0x1c,0x38,
	0x17,0xe8,
	0x50,0x08,
	0x52,0x48,
	0x59,0x98,
	0x4c,0x30,
	0x7f,0xf8,
	0x36,0x68,
	0x32,0x4c,
	0x27,0xe4,
	0x3d,0xbc,
	0x2f,0xf0,
	0x2a,0x50,
	0x2e,0x70,
	0x00,0x00
};
const unsigned char main_char_left[] PROGMEM =  {
	0x00,0x80,
	0x01,0xc0,
	0x0f,0x40,
	0x08,0x20,
	0x3a,0x10,
	0x30,0x90,
	0x10,0x90,
	0x08,0xa0,
	0x07,0xc0,
	0x0a,0xbe,
	0x1f,0xe2,
	0x15,0x6e,
	0x1f,0xe8,
	0x0f,0xf8,
	0x03,0x80,
	0x03,0x80
};

const unsigned char main_char_right[] PROGMEM =  {
	0x01,0x00,
	0x03,0x80,
	0x02,0xf0,
	0x04,0x10,
	0x08,0x5c,
	0x08,0x0c,
	0x08,0x08,
	0x04,0x10,
	0x03,0xe0,
	0x7d,0x50,
	0x47,0x78,
	0x76,0x28,
	0x17,0xf8,
	0x1f,0xf0,
	0x01,0x40,
	0x01,0xc0
};

const unsigned char main_char_back[] PROGMEM = {
	0x00,0x00,
	0x1c,0x38,
	0x17,0xe8,
	0x10,0x0a,
	0x10,0x0a,
	0x18,0x1a,
	0x0c,0x32,
	0x1f,0xfe,
	0x16,0x6c,
	0x36,0x6c,
	0x27,0xe4,
	0x3c,0xfc,
	0x0e,0x74,
	0x0b,0xd4,
	0x0e,0x74,
	0x00,0x00
};



#endif /* BITMAP_CHAR_H_ */