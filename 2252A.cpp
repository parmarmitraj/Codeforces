#include <bits/stdc++.h>
using namespace std;

int main() {
    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long size;
        cin >> size;

        vector<long long> numbers(size);
        for (long long i = 0; i < size; i++) {
            cin >> numbers[i];
        }

        unordered_map<long long, long long> frequency;
        for (long long i = 0; i < size; i++) {
            frequency[numbers[i]]++;
        }

        vector<pair<long long, long long>> frequencyList(frequency.begin(), frequency.end());

        if (frequencyList.size() == 1) {
            if (frequencyList[0].second == 1) {
                cout << frequencyList[0].first << endl;
            } else {
                cout << frequencyList[0].first * 2 << endl;
            }
            continue;
        }

        sort(frequencyList.begin(), frequencyList.end(),
             [](const pair<long long, long long> &firstPair,
                const pair<long long, long long> &secondPair) {
                 if (firstPair.second == secondPair.second) {
                     return firstPair.first > secondPair.first;
                 }
                 return firstPair.second > secondPair.second;
             });

        long long answer = 0;

        while (true) {
            pair<long long, long long> highestFreq = frequencyList[0];
            pair<long long, long long> secondHighestFreq = frequencyList[1];

            if (highestFreq.second == 0) {
                break;
            }

            if (secondHighestFreq.second == 0) {
                if (highestFreq.second >= 1) {
                    answer += highestFreq.first;
                }

                highestFreq.second--;

                if (highestFreq.second >= 1) {
                    answer += highestFreq.first;
                }

                break;
            }

            answer += highestFreq.first;
            frequencyList[0].second--;

            answer += secondHighestFreq.first;
            frequencyList[1].second--;

            sort(frequencyList.begin(), frequencyList.end(),
                 [](const pair<long long, long long> &firstPair,
                    const pair<long long, long long> &secondPair) {
                     if (firstPair.second == secondPair.second) {
                         return firstPair.first < secondPair.first;
                     }
                     return firstPair.second > secondPair.second;
                 });
        }

        cout << answer << endl;
    }

    return 0;
}