#ifndef CUSTOM_CHARACTERS_H_
#define CUSTOM_CHARACTERS_H_

#include <Arduino.h>

static const unsigned char bluetoothSymbol[] PROGMEM = {
    0b00001100, 0b00000000,
    0b00001111, 0b00000000,
    0b00001100, 0b11000000,
    0b11001100, 0b00110000,
    0b00111100, 0b11000000,
    0b00001111, 0b00000000,
    0b00001111, 0b00000000,
    0b00111100, 0b11000000,
    0b11001100, 0b00110000,
    0b00001100, 0b11000000,
    0b00001111, 0b00000000,
    0b00001100, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000
};

static const unsigned char runnerSymbol[] PROGMEM = {
    0b00000000, 0b11100000,
    0b00000000, 0b11100000,
    0b00000000, 0b01000110,
    0b00000001, 0b11100110,
    0b00000111, 0b11111100,
    0b00000110, 0b11111000,
    0b00001100, 0b11100000,
    0b00001100, 0b11100000,
    0b00000000, 0b11110000,
    0b00000001, 0b11111000,
    0b00000001, 0b10011000,
    0b00000011, 0b10001100,
    0b00001111, 0b00001100,
    0b00011100, 0b00000110
};  

static const unsigned char carSymbol[] PROGMEM = {  
    0b00000000, 0b00000000, 
    0b01000000, 0b00000000,
    0b00111111, 0b11000000,
    0b00100100, 0b00100000,
    0b01000100, 0b00010000,
    0b01000100, 0b00010000,
    0b01000100, 0b00001000,
    0b11111111, 0b11111111,
    0b10111111, 0b11111101,
    0b11111111, 0b11111111,
    0b11001111, 0b11110011,
    0b01001000, 0b00010010,
    0b00110000, 0b00001100,
    0b00000000, 0b00000000
};

static const unsigned char jeepSymbol[] PROGMEM = {   
    0b00000000, 0b00000000,
    0b10000000, 0b00000000,
    0b11111111, 0b11000000,
    0b10000100, 0b01000000,
    0b10000100, 0b00100000,
    0b10000100, 0b00100000,
    0b10000100, 0b00010000,
    0b11111111, 0b11111111,
    0b11111111, 0b11111101,
    0b11111111, 0b11111111,
    0b11001111, 0b11110011,
    0b01001000, 0b00010010,
    0b00110000, 0b00001100,
    0b00000000, 0b00000000
};

static const unsigned char bikeSymbol[] PROGMEM = {
    0b00000001, 0b10000000,
    0b00000011, 0b11000000,
    0b00000001, 0b10000000,
    0b00000011, 0b10000000,
    0b00000111, 0b11000000,
    0b00001110, 0b11100000,
    0b00001110, 0b01111000,
    0b00011111, 0b11010000,
    0b00110111, 0b00101100,
    0b01001011, 0b10010010,
    0b10110101, 0b11101101,
    0b10110111, 0b10101101,
    0b01001001, 0b10010010,
    0b00110000, 0b00001100
};

static const unsigned char motorcycleSymbol[] PROGMEM = {
    0b00000001, 0b10000000,
    0b00000011, 0b11000000,
    0b00000001, 0b10000000,
    0b00000011, 0b10000000,
    0b00000111, 0b11001000,
    0b00001110, 0b11100100,
    0b11101110, 0b01111110,
    0b01111111, 0b11111110,
    0b00110111, 0b00101100,
    0b01001011, 0b10010010,
    0b10110101, 0b11101101,
    0b11111111, 0b10101101,
    0b01001001, 0b10010010,
    0b00110000, 0b00001100
};

static const unsigned char shipSymbol[] PROGMEM = {
    0b00100000, 0b00000000,
    0b00010000, 0b00000000,
    0b00001000, 0b00000000,
    0b00111111, 0b10000000,
    0b00001111, 0b11000000,
    0b00001100, 0b00100000,
    0b00001100, 0b00010000,
    0b01001100, 0b00001000,
    0b01111111, 0b11111111,
    0b10000000, 0b00000001,
    0b11111111, 0b11111110,
    0b11111111, 0b11111000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
};

static const unsigned char truckSymbol[] PROGMEM = {
    0b00000000, 0b00100000,
    0b00000000, 0b00010000,
    0b11111111, 0b11010000,
    0b11111111, 0b11011111,
    0b11111111, 0b11011001,
    0b11111111, 0b11011001,
    0b11111111, 0b11011001,
    0b11111111, 0b11011111,
    0b11111111, 0b11011111,
    0b11111111, 0b11011101,
    0b10000000, 0b01111111,
    0b11111111, 0b10000001,
    0b01111101, 0b11111111,
    0b01101100, 0b11000110
};

static const unsigned char recreationalVehicleSymbol[] PROGMEM = {
    0b00000111, 0b11111000,
    0b01111110, 0b01001100,
    0b11111110, 0b01001110,
    0b11111111, 0b11111110,
    0b11111111, 0b11111000,
    0b10000100, 0b00100100,
    0b10000100, 0b00100010,
    0b11111100, 0b00100001,
    0b11111011, 0b11011111,
    0b10111011, 0b11011101,
    0b11111000, 0b00011101,
    0b11001111, 0b11110011,
    0b01001000, 0b00010010,
    0b00110000, 0b00001100
};

static const unsigned char vanSymbol[] PROGMEM = { 
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b01111111, 0b11110000,
    0b11111111, 0b11111000,
    0b10000100, 0b00100100,
    0b10000100, 0b00100010,
    0b10000100, 0b00100001,
    0b11111111, 0b11111111,
    0b10100000, 0b00000101,
    0b11111111, 0b11111101,
    0b11001111, 0b11100111,
    0b01001000, 0b00100100,
    0b00110000, 0b00011000,
    0b00000000, 0b00000000
};

static const unsigned char carsateliteSymbol[] PROGMEM = { 
    0b00000000, 0b00000100, 
    0b01000000, 0b00000100,
    0b00111111, 0b11011111,
    0b00100100, 0b00100100,
    0b01000100, 0b00010100,
    0b01000100, 0b00010000,
    0b01000100, 0b00001000,
    0b11111111, 0b11111111,
    0b10111111, 0b11111101,
    0b11111111, 0b11111111,
    0b11001111, 0b11110011,
    0b01001000, 0b00010010,
    0b00110000, 0b00001100,
    0b00000000, 0b00000000
};

static const unsigned char tentSymbol[] PROGMEM = { 
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00001111, 0b11110000,
    0b00001000, 0b00110000,
    0b00010000, 0b01111000,
    0b00010000, 0b01011000,
    0b00100000, 0b10010100,
    0b00100000, 0b10010100,
    0b01000001, 0b00010010,
    0b01000001, 0b00010010,
    0b11100010, 0b00010001,
    0b00011111, 0b11111111,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000
};

/*static const unsigned char noSymbol[] PROGMEM = {
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000,
    0b00000000, 0b00000000
};*/

#endif