/* 本示例解释两种注释方法，同时运行最简单的实例文件“blink”，同时基本了解Arduino的运行模式。*/

int a = 13;//定义全局变量LED_BUILTIN为整数13,13可以有很多含义，在不同的函数下13代表不同的含义。

// the setup function runs only the first time
void setup() {
  pinMode(a, OUTPUT);  // initialize digital pin a as an output.在pinMode下13是指arduino第13号引脚，在UNO中，第13号引脚已经接到了板载LED灯，无须外置灯泡。
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
