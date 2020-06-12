#ifndef HMMERPLUGIN_H
#define HMMERPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class HMMERPlugin : public Plugin
{
public: 
 std::string toString() {return "HMMER";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
std::map<std::string, std::string> parameters;
};

#endif
