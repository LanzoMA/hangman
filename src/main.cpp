#include <iostream>
#include "json.hpp"
using json = nlohmann::json;
#include <fstream>
#include "hangman.hpp"
#include <random>

int main() {
	std::ifstream configFile("config.json");
	json config = json::parse(configFile);

	std::random_device dev;
	std::uniform_int_distribution<int> dist(0, 99);

	const int lives = config["lives"];
	std::vector<std::string> words = config["words"];
	const std::string word = words[dist(dev)];

	Hangman hangman(lives, word);
	hangman.run();

	return 0;
}
