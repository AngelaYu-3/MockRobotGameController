/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/DriveTrain.h"
#include "commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem") {
  leftMotor = new TalonSRX(6);
  rightMotor = new TalonSRX(5);
  leftMotor->SetInverted(true);
}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
  SetDefaultCommand(new TankDrive);
}

void DriveTrain::power(double leftPower, double rightPower){
  leftMotor->Set(ControlMode::PercentOutput, leftPower); //why pointer from leftP to Set
  rightMotor->Set(ControlMode::PercentOutput, rightPower);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
