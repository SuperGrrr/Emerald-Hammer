// MinecraftServerTools.h : Include file for standard system include files,
// or project specific include files.

#pragma once
//	System
#include <iostream>
#include <fstream>
#include <csignal>
#include <system_error>
//  Collections
#include <map>
#include <vector>
#include <array>
#include <list>
#include <string>
#include <algorithm>
//	Time
#include <chrono>
//	Math
#include <cmath>



//	may need to add boost lib for interprocess communication. unless stdlib workaround can be achieved.
// TODO: Reference additional headers your program requires here.
using namespace std;
namespace Emerald_Hammer{

	class Config {
	public:
		Config();
		string fetch_setting(string name);
		void read_config(string& path);
	};

	struct keyval { string key, val; };

	int server_pid;

	string config_path = "./config/settings.config";

	int initialize_Server();

	int save();

	int exit();

	int suspend();

	void send_Command();

	void launch_service();
	
	// unknown return type at this time.
	void read_Console();
	void write_Console();


}