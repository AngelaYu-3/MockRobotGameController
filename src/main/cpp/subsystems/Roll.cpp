/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Roll.h"
#include "commands/Acquirer.h"

Roll::Roll() : Subsystem("ExampleSubsystem") {
  RollMotor = new TalonSRX(2); //port number
}

void Roll::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  //SetDefaultCommand(new Acquirer());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Roll::rollMethod(double inputs) {
  RollMotor->Set(ControlMode::PercentOutput, inputs);
}
