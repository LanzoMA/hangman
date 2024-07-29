#include "hangman.hpp"
#include <string>
#include <iostream>

Hangman::Hangman(const int lives, const std::string word) : m_lives(lives), m_word(word) { 
	for (char _ : m_word) m_wordProgress += "-";
}

void Hangman::run() {
	while (m_lives > 0) {
		std::cout << m_wordProgress << '\n';
		std::cout << "Lives: " << m_lives << '\n';
		std::cout << "Letters Guessed: " << m_lettersGuessed << '\n';
		std::cout << "Guess: ";
		std::cin >> m_guess;
		
		if (m_guess == m_word) {
			std::cout << "\nYou won\n";
			break;
		}

		// Guess a letter
		if (m_guess.length() == 1) {
			const char letter = m_guess[0];
			bool letterInWord = false;
			
			for (int i = 0; i < m_word.length(); i++) {
				if (letter == m_word[i]) {
					m_wordProgress[i] = letter;
					letterInWord = true;
				}
			}

			if (m_lettersGuessed.length() > 0) {
				m_lettersGuessed += ", ";
			}

			m_lettersGuessed += letter;

			std::cout << '\n';

			if (letterInWord) continue;
		}

		m_lives--;

		if (m_lives < 1) {
			std::cout << "\nYou lost\n";
			std::cout << "The word was " << m_word << '\n';
		}
	}
}