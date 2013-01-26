#ifndef command_h
#define command_h

#include "../io/bertha_buffer.h"
#include "../board/board.h"

class Command {
  
  BerthaBuffer _response;
  Board* _board;

  public:
    Command();
    BerthaBuffer execute();
    
  protected:
    Board* getBoard();
    virtual void updateBoard() = 0;
    virtual void buildResponse() = 0;
    
    void setOkStatus();
    void setErrorStatus();
    void appendNameAndValue(char* name, char* value);
    void appendNameAndValue(char* name, int value);

  private:
    void setStatus(char* status);
    void appendName(char* name);
    void appendValue(char* value);

};

#endif
