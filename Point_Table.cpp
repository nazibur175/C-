#include <iostream>
#include <vector>
using namespace std;

bool isValid(int PA, int PB, int PC) {
    // Check the total points
    int totalPoints = PA + PB + PC;
    if (totalPoints < 6 || totalPoints > 9) {
        return false; // Total points must be between 6 and 9
    }

    // Validate points distribution according to the rules
    // Possible outcomes for Team A:
    if (PA == 6) {
        return (PB == 0 && PC == 0); // Team A wins both
    } else if (PA == 5) {
        return 0; // Team A wins one and draws one
    } else if (PA == 4) {
        return (PB == 1+3 && PC == 0) || (PB == 1 && PC == 3 || (pb==0 && pc==4)); // Team A wins against one team and draws with the other
    } else if (PA == 3) {
        return (PB == 1 && PC == 4) || (PB == 3 && PC == 0 ); // One win and one draw
    } else if (PA == 2) {
        return (PB == 2 && PC == 2); // All teams draw against Team A
    } else if (PA == 1) {
        return (PB == 3 && PC == 5) || (PB == 5 && PC == 3); // Team A loses both
    } else if (PA == 0) {
        return (PB > 0 && PC > 0); // Team A loses both
    }

    return false; // Any other case is invalid
}

int main() {
    vector<vector<int>> validCombinations;

    // Brute force all possible points from 0 to 9 for each team
    for (int PA = 0; PA <= 9; PA++) {
        for (int PB = 0; PB <= 9; PB++) {
            for (int PC = 0; PC <= 9; PC++) {
                if (isValid(PA, PB, PC)) {
                    validCombinations.push_back({PA, PB, PC});
                }
            }
        }
    }

    // Output the valid combinations
    cout << "Valid point combinations:\n";
    for (const auto& combo : validCombinations) {
        cout << "Team A: " << combo[0] << ", Team B: " << combo[1] << ", Team C: " << combo[2] << endl;
    }

    cout << "Total valid combinations: " << validCombinations.size() << endl;

    return 0;
}
