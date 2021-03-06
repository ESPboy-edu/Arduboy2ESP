// Ninja Fuzzgrawth
// Last Edited: 20/10/17
// (c) Luke Carter (2017)
// (@Hundstrasse www.Hundstrasse.com)
//
//For more information visit website
//
//Controls
//A: Attack
//B: Jump


#include <Arduboy2.h>
Arduboy2 arduboy;
#include "Data.h"

#include "Overlay.h"
Overlay overlay;

#include "Particles.h"
Particles particles;

#include "Fire.h"
Fire fire;

#include "Ghost.h"
Ghost ghost;

#include "Stage.h"
Stage stage;

#include "Player.h"
Player player;

uint8_t menu_time = 0;

void setup() {
  arduboy.begin();
  Serial.begin(115200); //screen mirroring
  arduboy.setFrameRate(100);
  arduboy.clear();
  arduboy.drawSlowXYBitmap (44, 0, Paw_tag, 40, 56, 1);
  arduboy.setCursor (29, 56);
  arduboy.print ("@HUNDSTRASSE");
  arduboy.display();
  delay (3000);
}

void Game_loop () {
  arduboy.clear();
  player.Input_read();
  player.Move ();
  fire.Move ();
  ghost.Move ();
  player.Sit_update();
  player.Draw ();
  stage.Draw();
  fire.Draw ();
  ghost.Draw ();
  particles.Draw ();
  overlay.Draw ();
  if (overlay.Level_End_Check()) {
    fire.Reset ();
    ghost.Reset ();
    particles.Reset ();
    player.Reset ();
    stage.Construct ();
  }
}

void Menu_loop() {
  arduboy.clear();
  if (arduboy.pressed(A_BUTTON) || arduboy.pressed (B_BUTTON)) {
    //Start game
    arduboy.initRandomSeed();  //Seems to be fine here...
    fire.Reset ();
    ghost.Reset ();
    particles.Reset ();
    player.Reset ();
    overlay.Setlevel (1);
    stage.Construct ();
    overlay.Draw ();
  }
  else {
    //Draw Title Screen
    menu_time ++;
    if (menu_time == 100) menu_time = 0;
    arduboy.drawSlowXYBitmap (0, 0, Title, 128, 32, 1);
    if (menu_time < 50 ) arduboy.drawSlowXYBitmap (105, 0, P_stand_1R, 12, 16, 1);
    else arduboy.drawSlowXYBitmap (105, 0, P_stand_2R, 12, 16, 1);
    if (menu_time < 50) {
      arduboy.setCursor (35, 44);
      arduboy.print ("GAME START");
    }
  }
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  if (overlay.Ingame()) Game_loop();
  else Menu_loop();
  //Serial.write(arduboy.getBuffer(), 128 * 64 / 8); //screen mirroring
  arduboy.display();
}
