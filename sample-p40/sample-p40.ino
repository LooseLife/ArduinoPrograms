#define  LED_PIN 13

void setup() {
  // 初期化処理記述

  //13番ピンを出力として使用する
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // ループ処理記述

  //13番ピン点灯
  digitalWrite(LED_PIN, HIGH);
  //500ミリ秒(0.5秒)待機
  delay(500);
  //13番ピン消灯
  digitalWrite(LED_PIN, LOW);
  //500ミリ秒(0.5秒)待機
  delay(500);
  
}
