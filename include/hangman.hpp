#pragma once

#include <string>
#include <vector>

class Hangman {
public:
	Hangman(const int lives, const std::string word);
	void run();

private:
	int m_lives;
	const std::string m_word;
	std::string m_wordProgress;
	std::string m_lettersGuessed;
	std::string m_guess;
};