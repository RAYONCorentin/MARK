/*
    _____ _____  _               ____
   / ____|  __ \| |        /\   |  _ \
  | |  __| |__) | |       /  \  | |_) |
  | | |_ |  _  /| |      / /\ \ |  _ <
  | |__| | | \ \| |____ / ____ \| |_) |
   \_____|_|  \_\______/_/    \_\____/

*/

#include <MARK.h>

MARK myrobot;

void setup() {
  myrobot.begin();
}

void loop() {
  myrobot.lcdHome();
  myrobot.lcdPrint("Hello World !");
  delay(2000);
  myrobot.lcdClear();
  delay(2000);
}
