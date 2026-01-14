//
// Created by bumpy on 1/12/2026.
//

#include "Word.h"

void Word::setString_(std::string word) {
}

Word::Word(std::string word, int level, std::vector<float> entropyVec, std::vector<int> percentileVec,
    float expectedEntropy, float expectedWordsRemaining, int maxWordsRemaining, int numberOfGroups, int prior,
    std::vector<float> precomputedAverage, float expectedAdditionalGuesses) {
}

const std::string & Word::getString() const {
}

int Word::getLevel() const {
    return level_;
}

int Word::getScore() const {
    return score_;
}

char Word::getLetter(const int index) const {
    return word_[index];
}

void Word::setScore(const int score) {
    score_ = score;
}

std::string Word::toString() const {
}

bool Word::operator==(const Word &other) const {
}

bool Word::operator==(const std::string &other) const {
}
