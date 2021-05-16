#pragma once
#include "../src/Emerald_Hammer.h"

using namespace Emerald_Hammer;

class Config {
	vector<keyval> Settings{};

	// parsing and storing one key/value pair from valid line of the configuration file.

	void loadParam(string& line) {
		keyval param;
		auto delim = line.find('=');
		param.key = line.substr(0, delim);
		param.val = line.substr(++delim, delim - line.size());
		Settings.push_back(param);
	}

	bool isParam(string line) {
		return isalpha(line[0]);
	}

	public:
		// Constructers
		Config() {
			read_config(config_path);
		}

		// returns the value of the setting defined by name.
		string fetch_setting(string name){
			string result;
			find_if(begin(Settings), end(Settings), [&](keyval key) {if (key.key == name) { result = key.val; return false; } return true; });
			return result;
		}

		//  Reads or updates the Settings variable.
		void read_config(string& path) {
			fstream file;
			string line;
			file.open(path);
			if(!file.good()) {
				EXIT_FAILURE;
			}

			while (getline(file, line)) {
				if (isParam(line)) { loadParam(line); }
			}
		}
};