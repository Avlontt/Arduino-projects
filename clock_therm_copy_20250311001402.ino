int mstart=(53);// starting minute
int hstart=(18); //starting hour
const float AnalogPin=(A6); //the pin conected to resistor
const float R0=(9860); //resistance of resistor
const float RT=(8050); //resistrance of thermistor at 25C
const float B=(3950); //Beta of thermistor
const int d4 = 12;
const int g = 8;
const int c = 10;
const int dp = 9;
const int d = 11;
const int e = 13;
const int d1 = 7;
const int a = 6;
const int f = 5;
const int d2 = 4;
const int d3 = 3;
const int b = 1;
long timeoffset=0;
byte i=0;
float res;
float temp;
int read = 0; 
long resettime=millis();
bool tempbool = false;
void setup() {  
    int pins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    for (int i = 0; i < 14; i++) {  
        pinMode(pins[i], OUTPUT);   
        digitalWrite(pins[i], HIGH);
    }

    digitalWrite(7, LOW);  
    digitalWrite(4, LOW);  
    digitalWrite(3, LOW); 
    digitalWrite(12, LOW);
  
}

void loop() {
  long timer =millis(); 
  long time = timer - resettime;

  if (time >= 86400000) {
    timeoffset=timeoffset;
    resettime = millis()+timeoffset;
    time = 0;
  }
  unsigned long totalMinutes = (mstart + (time / 60000)) % 1440;
  unsigned long minute = totalMinutes % 60; 
  unsigned long hour = (totalMinutes / 60 + hstart ) % 24;  

  byte minute1 = minute % 10;
  byte minute2 = minute / 10;
  byte hour1 = hour % 10;
  byte hour2 = hour / 10;
  int ttimer=time % 30000;


if (ttimer <= 25000) {
  digitalWrite(d4, HIGH);
switch (minute1) {
    case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 6:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 7:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 8:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 9:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(d, HIGH);
        break;
        }
         digitalWrite(d4, LOW);
         digitalWrite(d3, HIGH);  
        switch (minute2) {
    case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
        }
         digitalWrite(d3, LOW); 
         digitalWrite(d2, HIGH); 
         switch (hour1) {
    case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(dp, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(dp, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 6:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 7:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 8:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 9:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(g, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(d, HIGH);
        break;
         }
        digitalWrite(d2, LOW);
        digitalWrite(d1, HIGH);  
         switch (hour2) {
    case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
}
digitalWrite(d1, LOW);
tempbool = false;
} 
if (ttimer > 25000) {
  if (!tempbool) {
      digitalWrite(2, HIGH);
      read = analogRead(AnalogPin);
      digitalWrite(2, LOW);
      tempbool = true;
  }
  float tres=R0*(1023-read)/read;
  float tempC = 1 /((1 / 298.15) + (1 / B) * log(tres / RT) )-273.15;
  int temp1 = ((int)tempC) / 10;         
  int temp2 = ((int)tempC) % 10;
  int temp3 = (int)(tempC*10)%10;
  digitalWrite(d1, HIGH);
  switch(temp1){
        case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
         case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
  }
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  switch (temp2){
   case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(dp, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(dp, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 6:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 7:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(dp, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 8:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 9:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(dp, LOW);
        digitalWrite(g, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(dp, HIGH);
        digitalWrite(d, HIGH);
        break;
         }
  digitalWrite(d2, LOW);
   digitalWrite(d3, HIGH);
  switch (temp3){
   case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(f, HIGH);
        break;
    case 1:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 4:
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 6:
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 7:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        break;
    case 8:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
        break;
    case 9:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(b, HIGH);
        digitalWrite(c, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(g, HIGH);
        digitalWrite(d, HIGH);
        break;
         }
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
        digitalWrite(a, LOW);
        digitalWrite(f, LOW);
        digitalWrite(e, LOW);
        digitalWrite(d, LOW);
        delay(3);
        digitalWrite(a, HIGH);
        digitalWrite(f, HIGH);
        digitalWrite(e, HIGH);
        digitalWrite(d, HIGH);
  digitalWrite(d4, LOW);
}
}
