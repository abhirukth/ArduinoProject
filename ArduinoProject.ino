#include<Adafruit_NeoPixel.h>
#include<LiquidCrystal.h>
#define n_led 20
#define PIN 8

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(n_led, PIN, NEO_GRB + NEO_KHZ800);
uint32_t r = pixels.Color(255, 0, 0);
uint32_t g = pixels.Color(0, 255, 0);
uint32_t b = pixels.Color(0, 0, 255);
uint32_t blank = pixels.Color(0, 0, 0);

void setup()
{
  pixels.begin();
  pixels.show();
  lcd.begin(16, 2);
}

void pat1()
{
  	for(int i=0;i<n_led;i++)
    {
      pixels.setPixelColor(i, r);
      delay(150);
      pixels.show();
    }
    
    for(int i=n_led-1;i>=0;i--)
    {
      pixels.setPixelColor(i, g);
      delay(150);
      pixels.show();
    }
    
    for(int i=0;i<n_led;i++)
    {
      pixels.setPixelColor(i, b);
      delay(150);
      pixels.show();
    }
    
    for(int i=n_led-1;i>=0;i--)
    {
      pixels.setPixelColor(i, r);
      delay(150);
      pixels.show();
    }
    
    for(int i=0;i<n_led;i++)
    {
      pixels.setPixelColor(i, g);
      delay(150);
      pixels.show();
    }
    
    for(int i=n_led-1;i>=0;i--)
    {
      pixels.setPixelColor(i, b);
      delay(150);
      pixels.show();
    }
  	return;
}

void pat2()
{
  int last = n_led;
  while(last >= 0)
  {
    for(int i=0;i<last;i++)
    {
      pixels.setPixelColor(i, r);
      pixels.setPixelColor(i - 1, blank);
      delay(50);
      pixels.show();
    }
    last--;
  }
  
  last = n_led;
  while(last >= 0)
  {
    for(int i=0;i<last;i++)
    {
      pixels.setPixelColor(i, g);
      pixels.setPixelColor(i - 1, blank);
      delay(50);
      pixels.show();
    }
    last--;
  }
  
  last = n_led;
  while(last >= 0)
  {
    for(int i=0;i<last;i++)
    {
      pixels.setPixelColor(i, b);
      pixels.setPixelColor(i - 1, blank);
      delay(50);
      pixels.show();
    }
    last--;
  }
  
  return;
}

void pat3()
{
  int t = 2;
  while(t--){
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, r);
  pixels.show();
    
  delay(500);
  
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, g);
  pixels.show();
  
  delay(500);
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, b);
  pixels.show();
  
  delay(500);
  
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, r);
  pixels.show();
    
  delay(500);
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, g);
  pixels.show();
  
  delay(500);
  
  for(int i=0;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, b);
  pixels.show();
  
  delay(500);
  
  for(int i=1;i<20;i+=2)
    pixels.setPixelColor(i, blank);
  pixels.show();
  }
  return;
}

void pat4()
{
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, r);
  pixels.show();
  
  delay(1000);
  
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  delay(1000);
  
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, g);
  pixels.show();
  
  delay(1000);
  
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  delay(1000);
  
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, b);
  pixels.show();
  
  delay(1000);
  
  for(int i=0;i<n_led;i++)
    pixels.setPixelColor(i, blank);
  pixels.show();
  
  delay(1000);
    
  return;
}

void pat5()
{
  int t = 2;
  while(t--){
  for(int i=0;i<n_led;i+=3)
  {
    pixels.setPixelColor(i, r);
    pixels.setPixelColor(i + 1, g);
    pixels.setPixelColor(i + 2, b);
    delay(500);
    pixels.show();
  }
  for(int i=0;i<n_led;i+=3)
  {
    pixels.setPixelColor(i, blank);
    pixels.setPixelColor(i + 1, blank);
    pixels.setPixelColor(i + 2, blank);
    delay(500);
    pixels.show();
  }
  }
  return;
}

void pat6(int count)
{
  if(count == 3)
    return;
  else
  {
    uint32_t color;
    if(count == 0)
      color = r;
    else if(count == 1)
      color = g;
    else
      color = b;
      
    for(int i=-5;i<n_led+1;i++)
    {
      pixels.setPixelColor(i, color);
      pixels.setPixelColor(i + 1, color);
      pixels.setPixelColor(i + 2, color);
      pixels.setPixelColor(i + 3, color);
      pixels.setPixelColor(i + 4, color);
      pixels.setPixelColor(i + 5, color);
      pixels.setPixelColor(i - 1, blank);
      pixels.show();
      delay(200);
    }
    
    pat6(count + 1);
  }
}

void loop()
{
  // lcd display 1
  lcd.setCursor(0, 0);
  lcd.print("* Happy Diwali *");  
  
  // lcd display 2
  lcd.setCursor(1, 1);
  lcd.print("CSE/19003/430");
  
  pat1();
  pat2();
  pat3();
  pat4();
  pat5();
  pat6(0);
}