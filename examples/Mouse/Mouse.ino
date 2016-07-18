// CocoMouse test and usage documentation
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)

#include <CocoMouse.h>

void setup() {
  CocoMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}

void loop() {
  // If not using plentiful CocoMouse.delay(), make sure to call
  // CocoMouse.update() at least every 50ms
  
  // move across the screen
  // these are signed chars
  CocoMouse.moveY(10); //down 10
  CocoMouse.delay(500);
  CocoMouse.moveX(20); //right 20
  CocoMouse.delay(500);
  CocoMouse.scroll(5);
  CocoMouse.delay(500);
  
  // or CocoMouse.move(X, Y, scroll) works
  
  // three buttons are the three LSBs of an unsigned char
  CocoMouse.setButtons(1<<0); //left click
  CocoMouse.delay(500);
  CocoMouse.setButtons(0); //unclick all
  CocoMouse.delay(500);

  //or you can use these functions to click
  CocoMouse.rightClick();
  CocoMouse.delay(500);
  CocoMouse.leftClick();
  CocoMouse.delay(500);
  CocoMouse.middleClick();
  CocoMouse.delay(500);

  //for compatability with other libraries you can also use CocoMouse.move(X, Y, scroll, buttons)
}
