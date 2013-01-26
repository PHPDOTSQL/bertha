#ifndef set_pin_command_h
#define set_pin_command_h

#include "pin_command.h"

class SetPinCommand : public PinCommand {

  char* _mode;
  char* _value;

  public:  
    SetPinCommand(CommandParser*);
    void updateBoard();
    void buildResponse();
};

#endif
