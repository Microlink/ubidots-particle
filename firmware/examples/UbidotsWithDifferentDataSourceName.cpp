// This example is to save values with a setted data source name

#include "Ubidots/Ubidots.h"


#define TOKEN "Your_Token_Here"  // Put here your Ubidots TOKEN
#define DATA_SOURCE_NAME "Your_Data_Source_Name"

Ubidots ubidots(TOKEN);

void setup() {  
    Serial.begin(115200);
    ubidots.setDatasourceName(DATA_SOURCE_NAME);
}
void loop() {
    float value1 = analogRead(A0);
    float value2 = analogRead(A1);
    float value3 = analogRead(A2);
    ubidots.add("Variable_Name_One", value1);  // Change for your variable name
    ubidots.add("Variable_Name_Two", value2);
    ubidots.add("Variable_Name_Three", value3);
    ubidots.sendAll();
    delay(5000);
}