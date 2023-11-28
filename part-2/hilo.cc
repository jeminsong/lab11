// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong0119
// Partners: @Card1n

#include "hilo.h"

#include "rng.h"

GameState::GameState(int secret) : secret_(secret), guesses_left_(4) {}

int GameState::Secret() const { return secret_; }

int GameState::GuessesLeft() const { return guesses_left_; }

bool GameState::GuessCorrect(int guess) const { return (guess == secret_); }

bool GameState::GuessTooBig(int guess) const { return (guess > secret_); }

bool GameState::GuessTooSmall(int guess) const { return (guess < secret_); }

void GameState::CountGuess() { guesses_left_--; }

bool GameState::GameOver() const { return (guesses_left_ == 0); }

int RandomSecretNumber() {
  RandomNumberGenerator rng(1.0, 10.0);
  return static_cast<int>(rng.Next());
}