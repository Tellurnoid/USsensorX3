//cf) https://qiita.com/maominionbsk54/items/e5fbdc52f51b11abbea3
//a
#define TRIG1 2
#define TRIG2 3
#define TRIG3 4

#define ECHO1 5
#define ECHO2 6
#define ECHO3 7



void setup() {
  Serial.begin(115200);
  pinMode(TRIG1, OUTPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(TRIG3, OUTPUT);
  pinMode(ECHO1, INPUT);
  pinMode(ECHO2, INPUT);
  pinMode(ECHO3, INPUT);
}
void loop() {
  test1();
}

float duration1 = 0;
float duration2 = 0;
float duration3 = 0;

float distance1 = 0;
float distance2 = 0;
float distance3 = 0;

float speed_of_sound = 331.5 + 0.6 * 25; // 25℃の気温の想定
void test1(){
            digitalWrite(TRIG1, LOW); 
            delayMicroseconds(2); 
            digitalWrite( TRIG1, HIGH );
            delayMicroseconds( 10 ); 
            digitalWrite( TRIG1, LOW );
            duration1 = pulseIn( ECHO1, HIGH ); 
            duration1 = duration1 / 2; 
            distance1 = duration1 * speed_of_sound * 100 / 1000000;


            digitalWrite(TRIG2, LOW); 
            delayMicroseconds(2); 
            digitalWrite( TRIG2, HIGH );
            delayMicroseconds( 10 ); 
            digitalWrite( TRIG2, LOW );
            duration2 = pulseIn( ECHO2, HIGH ); 
            duration2 = duration2 / 2; 
            distance2 = duration2 * speed_of_sound * 100 / 1000000;

            digitalWrite(TRIG3, LOW); 
            delayMicroseconds(2); 
            digitalWrite( TRIG3, HIGH );
            delayMicroseconds( 10 ); 
            digitalWrite( TRIG3, LOW );
            duration3 = pulseIn( ECHO3, HIGH ); 
            duration3 = duration3 / 2; 
            distance3 = duration3 * speed_of_sound * 100 / 1000000;

                //Serial.print("DisA:%d, DisB:%d, DisC:%d",distance1,distance2,distance3));
                Serial.print("DisA::");Serial.print(distance1);Serial.print("cm, ");
                Serial.print("DisB:");Serial.print(distance2);Serial.print("cm, ");
                Serial.print("DisC:");Serial.print(distance3);Serial.println("cm");

  }
