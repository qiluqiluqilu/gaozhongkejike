/* 本示例解释两种注释方法，同时运行最简单的实例文件“blink”，同时基本了解Arduino的运行模式。*/

int a = 13;//定义全局变量LED_BUILTIN为整数13,13可以有很多含义，在不同的函数下13代表不同的含义。

// setup函数只运行最开始的一次
void setup() {
  pinMode(a, OUTPUT);  //定义a引脚（13号引脚）为输出模式。
}

// loop函数会一直循环运行
void loop() {
  digitalWrite(a, HIGH);   // 让a引脚处于高电平（有电），“数字写”的含义为数字输出（最高电压5v或最低电压0v）。
  delay(1000);                       // 等待1000毫秒
  digitalWrite(a, LOW);    // 让a引脚处于低电平（没电）。
  delay(1000);                       // 
}
