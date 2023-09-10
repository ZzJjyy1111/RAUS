
"use strict";

let IsProgramSaved = require('./IsProgramSaved.js')
let GetSafetyMode = require('./GetSafetyMode.js')
let IsInRemoteControl = require('./IsInRemoteControl.js')
let AddToLog = require('./AddToLog.js')
let GetLoadedProgram = require('./GetLoadedProgram.js')
let Popup = require('./Popup.js')
let IsProgramRunning = require('./IsProgramRunning.js')
let GetRobotMode = require('./GetRobotMode.js')
let RawRequest = require('./RawRequest.js')
let GetProgramState = require('./GetProgramState.js')
let Load = require('./Load.js')

module.exports = {
  IsProgramSaved: IsProgramSaved,
  GetSafetyMode: GetSafetyMode,
  IsInRemoteControl: IsInRemoteControl,
  AddToLog: AddToLog,
  GetLoadedProgram: GetLoadedProgram,
  Popup: Popup,
  IsProgramRunning: IsProgramRunning,
  GetRobotMode: GetRobotMode,
  RawRequest: RawRequest,
  GetProgramState: GetProgramState,
  Load: Load,
};
