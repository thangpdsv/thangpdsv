#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

int main() {
    std::vector<int> onlinePlayers;
//   std::ios_base::sync_with_stdio(false);
//   std::cin.tie(NULL);
    int  isSort=0;

    while (true) {
        int action, playerId;
        std::cin >> action >> playerId;
        if (action == 0) {
            break;
        }

        if (action == 1) {
            onlinePlayers.push_back(playerId);
            isSort=1;
        } else if (action == 2) {

            if(isSort == 1){
                std::sort(onlinePlayers.begin(), onlinePlayers.end());
                isSort=0;
            }
            if (std::binary_search(onlinePlayers.begin(), onlinePlayers.end(), playerId)) {
                std::cout << "1\n";
            } else {
                std::cout << "0\n";
            }
        }
    }

    return 0;
}