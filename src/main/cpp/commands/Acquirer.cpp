/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/Acquirer.h"
#include "frc/GenericHID.h"
#include "Robot.h"

Acquirer::Acquirer(double input) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  speed = input;
}

// Called just before this Command runs the first time
void Acquirer::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Acquirer::Execute() {
  bool InButtonPressed = Robot::m_oi->getIn()->Get();
  bool OutButtonPressed = Robot::m_oi->getOut()->Get();
  Robot::moveRoll->rollMethod(speed);

}

bool Acquirer::IsFinished(){return false;}

void Acquirer::End() {}


// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Acquirer::Interrupted() {}
