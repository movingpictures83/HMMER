#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "HMMERPlugin.h"

void HMMERPlugin::input(std::string file) {
 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   parameters[key] = value;
 }

}

void HMMERPlugin::run() {}

void HMMERPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand +=  "hmmsearch";
///myCommand += " --domtblout ";
myCommand += " --tblout ";
myCommand += outputfile+" --cut_tc --cpu 1";
myCommand += " ";
myCommand += parameters["markers"] + " ";
myCommand += parameters["fragments"] + " ";
myCommand += "1>hmmout.out 2>hmmout.err";
system(myCommand.c_str());
}

PluginProxy<HMMERPlugin> HMMERPluginProxy = PluginProxy<HMMERPlugin>("HMMER", PluginManager::getInstance());
