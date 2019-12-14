/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <frc/WPILib.h>
#include "commands/Acquirer.h"

OI::OI() {
  // Process operator interface input here.
  driveJoy = new Joystick(0);
  In = new JoystickButton(driveJoy, 1); //pick port numbers
  Out = new JoystickButton(driveJoy, 2);
  //while(true) {
    In->WhenPressed(new Acquirer(1));
    Out->WhenPressed(new Acquirer(-1));
    In->WhenReleased(new Acquirer(0));
    Out->WhenReleased(new Acquirer(0)); 
    //fighting with itself, one button pressed other released so still at 0
  //}
}

Joystick* OI::getJoy(){ 
  return driveJoy; 
}

JoystickButton* OI::getIn(){
  return In;
}

JoystickButton* OI::getOut(){
  return Out;
}
