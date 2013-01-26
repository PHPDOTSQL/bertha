#include "factory.h"

Command* CommandFactory::createCommand(BerthaBuffer request) {

  CommandParser* parser = new CommandParser(request);
  char* verb = parser->verb();

  if (!strcmp("version", verb)) return new VersionCommand();
  if (!strcmp("reset", verb)) return new ResetCommand();
  if (!strcmp("queryPin", verb)) return new QueryPinCommand(parser);
  if (!strcmp("setPin", verb)) return new SetPinCommand(parser);
  return new ErrorCommand();
}
