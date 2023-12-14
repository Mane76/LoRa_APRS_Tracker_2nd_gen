#ifndef PINS_CONFIG_H_
#define PINS_CONFIG_H_

#undef OLED_SDA
#undef OLED_SCL
#undef OLED_RST

#define OLED_SDA        21
#define OLED_SCL        22
#define OLED_RST        16

#if defined(TTGO_T_Beam_V1_0) || defined(TTGO_T_Beam_V1_2) || defined(TTGO_T_Beam_V1_0_SX1268)
#define GPS_RX          12
#define GPS_TX          34
#define BUTTON_PIN      38 // The middle button GPIO on the T-Beam
#endif

#if defined(ESP32_DIY_LoRa_GPS) || defined(TTGO_T_LORA_V2_1_GPS)
#define GPS_RX          12
#define GPS_TX          34
#define BUTTON_PIN      -1
#define LORA_SCK        5
#define LORA_MISO       19
#define LORA_MOSI       27
#define LORA_CS         18  // CS  --> NSS
#define LORA_RST        23
#define LORA_IRQ        26  // IRQ --> DIO0
#endif

#ifdef ESP32_DIY_1W_LoRa_GPS
#define GPS_RX          17
#define GPS_TX          16
#define BUTTON_PIN      15
#define RADIO_SCLK_PIN  18
#define RADIO_MISO_PIN  19
#define RADIO_MOSI_PIN  23
#define RADIO_CS_PIN    5
#define RADIO_RST_PIN   27
#define RADIO_DIO1_PIN  12
#define RADIO_BUSY_PIN  14
#define RADIO_RXEN      32
#define RADIO_TXEN      25
#endif

#if defined(TTGO_T_Beam_V1_0_SX1268)
#define RADIO_SCLK_PIN  5
#define RADIO_MISO_PIN  19
#define RADIO_MOSI_PIN  27
#define RADIO_CS_PIN    18
#define RADIO_DIO0_PIN  26
#define RADIO_RST_PIN   23
#define RADIO_DIO1_PIN  33
#define RADIO_BUSY_PIN  32
#endif

#ifdef TTGO_T_Beam_V0_7
#define GPS_RX          15
#define GPS_TX          12
#define BUTTON_PIN      39
#endif

#ifdef TTGO_T_LORA_V2_1_TNC
#define GPS_RX          -1
#define GPS_TX          -1
#define BUTTON_PIN      -1
#endif

#endif