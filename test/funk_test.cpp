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
