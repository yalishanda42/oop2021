#pragma once

template <typename T, typename U>
class Pair {
private:
    const T first;
    const U second;

public:
    Pair(const T&, const U&);

    T getFirst() const;
    U getSecond() const;

    Pair<U, T> swapped() const;
};

template <typename T, typename U>
Pair<T, U>::Pair(const T& first, const U& second)
    : first(first), second(second)
{
}

template <typename T, typename U>
T Pair<T, U>::getFirst() const
{
    return first;
}

template <typename T, typename U>
U Pair<T, U>::getSecond() const
{
    return second;
}

template <typename T, typename U>
Pair<U, T> Pair<T, U>::swapped() const
{
    return Pair<U, T>(second, first);
}
