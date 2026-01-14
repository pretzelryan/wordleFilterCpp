//
// Created by bumpy on 1/12/2026.
//

#ifndef WORDLEFILTERCPP_WORD_H
#define WORDLEFILTERCPP_WORD_H
#include <string>
#include <vector>


class Word {
private:
    std::string word_;
    int level_;
    std::vector<float> entropyVec_;
    std::vector<int> percentileVec_;
    float expectedEntropy_;
    float expectedWordsRemaining_;
    int maxWordsRemaining_;
    int numberOfGroups_;
    int prior_;
    std::vector<float> precomputedAverage_;
    float expectedAdditionalGuesses_;
    int score_;

    /**
     * Sets the word string of the word object. Should only be called by constructor.
     *
     * @param word String word to set value.
     */
    void setString_(std::string word);

public:
    /**
     * Constructor.
     *
     * @param word string word.
     * @param level int level.
     * @param entropyVec entropy vector of floats.
     * @param percentileVec integer vector of percentiles.
     * @param expectedEntropy float expected entropy.
     * @param expectedWordsRemaining float expected words remaining.
     * @param maxWordsRemaining integer max words remaining.
     * @param numberOfGroups integer number of groups remaining.
     * @param prior integer prior.
     * @param precomputedAverage float vector of precomputed averages
     * @param expectedAdditionalGuesses float expected additional guesses.
     */
    Word(std::string word,
         int level,
         std::vector<float> entropyVec,
         std::vector<int> percentileVec,
         float expectedEntropy,
         float expectedWordsRemaining,
         int maxWordsRemaining,
         int numberOfGroups,
         int prior,
         std::vector<float> precomputedAverage,
         float expectedAdditionalGuesses);

    /**
     * Gets the string of word representation.
     *
     * @return A read only address to string.
     */
    [[nodiscard]] const std::string& getString() const;

    /**
     * Gets the level integer of represented word.
     *
     * @return An integer of word level.
     */
    [[nodiscard]] int getLevel() const;

    /**
     * Gets the integer score of the represented word.
     *
     * @return An integer score.
     */
    [[nodiscard]] int getScore() const;

    /**
     * Gets the char in the specified index from the represented word.
     * The first letter can be indexed by 0, and the last by length - 1.
     *
     * @param index Integer index to retrieve char from.
     * @return The char from the word at the specified index.
     */
    [[nodiscard]] char getLetter(int index) const;

    /**
     * Sets the score of the represented word.
     *
     * @param score Integer score to give to represented word.
     */
    void setScore(int score);

    /**
     * Gets the string representation of the word.
     *
     * @return String of word.
     */
    [[nodiscard]] std::string toString() const;

    /**
     * Checks if this word is identical to another.
     *
     * @param other The word object to compare against.
     * @return True if the word objects represent the same string, false otherwise.
     */
    bool operator==(const Word& other) const;

    /**
     * Checks if this word represents the string being compared to.
     *
     * @param other The string to compare against.
     * @return True if the string this word represents is the same, false otherwise.
     */
    bool operator==(const std::string& other) const;
};


#endif //WORDLEFILTERCPP_WORD_H