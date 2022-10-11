
uint8_t data2Send[]={
0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,
};
uint8_t data2Read[256];

#include <SPI.h>
#include <ESP8266Spiram.h>

#define ESP_BUSY 4 // NodeMCU Pin D2 to Pokitto PIN EXT0 P1_19
#define LPC_BUSY 5 // NodeMCU Pin D1 to Pokitto Pin Ext1 P0_11

#define PIN1 15 /* NodeMCU D8, Pokitto EXT12 P1_5  -- C/S */
#define PIN2 12 /* NodeMCU D6, Pokitto EXT9  P1_12 -- MISO */
#define PIN5 13 /* NodeMCU D7, Pokitto EXT8 P1_20  -- MOSI */
#define PIN6 14 /* NodeMCU D5, Pokitto EXT13 P1_6  -- SCK*/

/* #define PIN3 NULL /* NodeMCU , Pokitto EXT10 P1_22 */
/* #define PIN4 GND */
/* #define PIN7  /* NodeMCU , Pokitto EXT11 P1_23 */
/* #define PIN8 VCC /* NodeMCU , Pokitto EXT P */

/*
Pin on RAM chip | functionality | Pin on ESP8266
----------------|---------------|----------------
   pin1         |  C/S          |  GPIO15
   pin2         |  MISO         |  GPIO12
   pin3         |  N/C          |  Gnd
   pin4         |  Vss          |  Gnd
   pin5         |  MOSI         |  GPIO13
   pin6         |  SCK          |  GPIO14
   pin7         |  HOLD         |  V+
   pin8         |  Vcc          |  V+
*/

//ESP8266Spiram Spi_ram(15,20e6);
ESP8266Spiram Spi_ram;

void releaseControl(){
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN5, INPUT);
  pinMode(PIN6, INPUT);
}

void takeControl(){
  pinMode(PIN1, OUTPUT); // CS
  pinMode(PIN2, OUTPUT); // MISO
  pinMode(PIN5, INPUT); // MOSI
  pinMode(PIN6, OUTPUT); // SCK
}

void setup() {
  releaseControl();
/*  
  delay(1000);
  Serial.begin(115200);
  while(!Serial);
  Serial.println("SPI RAM Test.");
  delay(10);
  
  Serial.println("Initing RAM chip...");
  delay(10);

  Spi_ram.begin();
  Serial.println("Done.");
  delay(1000);
  //Spi_ram.setByteMode();
  Spi_ram.setSeqMode();


  int positionOffset = 0;
  int startTime = millis();
  for(int t=0; t<256; t++){
    Spi_ram.write(positionOffset, data2Send, 256);
    positionOffset+=256;
  }
  int endTime = millis();
  int fullTime =  endTime-startTime;
  Serial.print("65535 bytes write = ");
  Serial.println(fullTime);
  
  delay(100);
*/
}

void loop() {
/*
  int positionOffset = 0;
  int startTime = millis();
  for(int t=0; t<256; t++){
    Spi_ram.read(positionOffset, data2Read, 256);
    positionOffset+=256;
  }
  int endTime = millis();
  int fullTime =  endTime-startTime;
  Serial.print("65535 bytes read = ");
  Serial.println(fullTime);

  */
/*
  for(int x=0; x<256; x++){
    Serial.print(data2Read[x]);
    Serial.print(",");
  }
  Serial.println(" ");
*/
}
