#include "../src/funk.h"
#include "../thirdparty/ctest.h"

CTEST(number, sum) {
  // Given
  const int a = 1;
  // When
  const int result = sum(a);
  // Then
  const int expected = 2;
  ASSERT_EQUAL(expected, result);
}

CTEST(number, sumMinus) {
  // Given
  const int a = -1;
  // When
  const int result = sum(a);
  // Then
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

CTEST(number, sumNoli) {
  // Given
  const int a = 0;
  // When
  const int result = sum(a);
  // Then
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}

CTEST(WordsAnalyze, NormalWord) {
  // Given
  char words[] = "blue\nred\nyellow\nbrown";
  // When
  char *real = random_wordll(words);
  // Then
  char exp[] = "blue\n";
  ASSERT_STR(exp, real);
}

CTEST(WordsAnalyze, NormalWord2) {
  // Given
  char words[] = "red\nall\nyellow\nbrown";
  // When
  char *real = random_wordll(words);
  // Then
  char exp[] = "red\n";
  ASSERT_STR(exp, real);
}

CTEST(WordsAnalyze, NormalWordYellow) {
  // Given
  char words[] = "yellow\nblue\nred\nbrown";
  // When
  char *real = random_wordll(words);
  // Then
  char exp[] = "yellow\n";
  ASSERT_STR(exp, real);
}

CTEST(ColorsReader, Normal) {
  // Given
  char words[] = "yellow\nblue\nred\nbrown";
  // When
  char *real = random_wordll(words);
  // Then
  char exp[] = "yellow\n";
  ASSERT_STR(exp, real);
}

CTEST(ColorsReader, testNULL) {
  // Given
  char words[] = "yellow\nblue\nred\nbrown";
  // When
  char *real = random_wordll(NULL);
  // Then
  char *exp = NULL;
  ASSERT_STR(exp, real);
}

CTEST(ColorsReader, emptyArray) {
  // Given
  char words[] = "";
  // When
  char *real = random_wordll(words);
  // Then
  char exp[] = "";
  ASSERT_STR(exp, real);
}

CTEST(ColorsReader, badArray) {
  // Given
  char *words = NULL;
  // When
  char *real = random_wordll(words);
  // Then
  char *exp = NULL;
  ASSERT_STR(exp, real);
}
