// TeenyMouse test and usage documentation
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)

#include <TeenyMouse.h>

void setup() {
  TeenyMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}

void loop() {
  // If not using plentiful TeenyMouse.delay(), make sure to call
  // TeenyMouse.update() at least every 50ms
  
  // move across the screen
  // these are signed chars
  TeenyMouse.moveY(10); //down 10
  TeenyMouse.delay(500);
  TeenyMouse.moveX(20); //right 20
  TeenyMouse.delay(500);
  TeenyMouse.scroll(5);
  TeenyMouse.delay(500);
  
  // or TeenyMouse.move(X, Y, scroll) works
  
  // three buttons are the three LSBs of an unsigned char
  TeenyMouse.setButtons(1<<0); //left click
  TeenyMouse.delay(500);
  TeenyMouse.setButtons(0); //unclick all
  TeenyMouse.delay(500);

  //or you can use these functions to click
  TeenyMouse.rightClick();
  TeenyMouse.delay(500);
  TeenyMouse.leftClick();
  TeenyMouse.delay(500);
  TeenyMouse.middleClick();
  TeenyMouse.delay(500);

  //for compatability with other libraries you can also use TeenyMouse.move(X, Y, scroll, buttons)
}
